#include <bits/stdc++.h>
using namespace std;
int main() {

  string S;
  cin >> S;
  set<string> answer;

  for (int i = 1; i <= S.size(); i++) {
    int of_size_x = i;
    for (int starting_from = 0; starting_from < S.size(); starting_from++) {
      string current = "";
      for (int k = 0; k < of_size_x && k + starting_from < S.size(); k++) {
        current += S[k + starting_from];
      }
      if (current.size() == of_size_x) {
        answer.insert(current);
      }
    }
  }

  cout << answer.size() << endl;
  return 0;
}