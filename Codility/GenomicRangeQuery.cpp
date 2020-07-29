#include <iostream>
#include <vector>
#include <map>

using namespace std;

string sequence = "ACGT";
vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
  vector<int> answer;
  map<char,vector<int>> mapa;
  map<char, int> valueOfLetter;

  valueOfLetter['A'] = 1;
  valueOfLetter['C'] = 2;
  valueOfLetter['G'] = 3;
  valueOfLetter['T'] = 4;
  mapa['A'] = vector<int> (S.size() + 1, 0);
  mapa['C'] = vector<int> (S.size() + 1, 0);
  mapa['G'] = vector<int> (S.size() + 1, 0);
  mapa['T'] = vector<int> (S.size() + 1, 0);

  for (int i = 0; i < sequence.size(); i++) {
    for (int j = 0; j < S.size(); j++) {
      mapa[sequence[i]][j+1] = mapa[sequence[i]][j] + (int)(S[j] == sequence[i]);
    }
  }

  for (int i = 0; i < P.size(); i++) {
    int L = P[i]+1, R = Q[i]+1;
    int miniAnswer = 1e9;

    for (auto &c: sequence) {
      int exists;
      if (L == R) {
        exists = c == S[L-1];
      } else {
        if (mapa[c][R] == mapa[c][L] && mapa[c][L] > 0 && mapa[c][L-1] != mapa[c][L]) {
          exists = true;
        } else {
          exists = mapa[c][R] - mapa[c][L];
        }
      }

      if (exists) {
        miniAnswer = min(miniAnswer, valueOfLetter[c]);
      }
    }

    answer.push_back(miniAnswer);
  }
  return answer;
}
int main () {
  string S = "AC";
  vector<int> P = { 0, 0, 1 };
  vector<int> Q = { 0, 1, 1 };

  vector<int> answer;
  answer = solution(S, P, Q);
  for (int i = 0; i < answer.size(); i++) {
    cout << answer[i] << endl;
  }
  return 0;
}