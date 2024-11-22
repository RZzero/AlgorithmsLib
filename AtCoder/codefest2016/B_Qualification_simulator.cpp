#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  string S;
  cin >> S;

  int japanese_passed = 0;
  int overseas_passed = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] == 'a' && japanese_passed + overseas_passed < A + B) {
      japanese_passed++;
      cout << "Yes" << endl;
    } else if (S[i] == 'b' && japanese_passed + overseas_passed < A + B && overseas_passed < B) {
      overseas_passed++;
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}