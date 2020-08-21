// https://codeforces.com/problemset/problem/1354/B
#include <iostream>
#include <set>

using namespace std;

int get_min_starting_with_char(char start, string &S) {
  int answer = 1e9;
  int cnt = 0;
  bool initialized = false;
  set<char> seto;

  for (int i = 0; i < S.size(); i++) {
    if (S[i] == start) {
      seto.clear();
      seto.insert(S[i]);
      initialized = true;
      cnt = 0;
    }

    if (!initialized) continue;

    seto.insert(S[i]);
    cnt++;
    if (seto.size() == 3) {
      answer = min(answer, cnt);
      initialized = false;
      cnt = 0;
      seto.clear();
    }
  }
  return answer;
}

bool is_valid(string &S) {
  set<char> seto;
  for (int i = 0; i < S.size(); i++) seto.insert(S[i]);
  return seto.size() == 3;
}

int main () {

  int T;
  cin >> T;

  while(T--) {
    string S;
    cin >> S;

    if (!is_valid(S)) {
      cout << 0 << endl;
    } else {
      int starting_with_one = get_min_starting_with_char('1', S);
      int starting_with_two = get_min_starting_with_char('2', S);
      int starting_with_three = get_min_starting_with_char('3', S);
      cout << min({ starting_with_one, starting_with_two, starting_with_three }) << endl;
    }
  }
  return 0;
}