#include <bits/stdc++.h>
using namespace std;

int main () {
  int N, K;
  string S;
  cin >> N >> K;
  cin >> S;
  stack<char> myStack;
  
  string answer = "";

  int cnt_open = 0;
  for (int i = 0; i < N; i++) {
    if (myStack.size() == 0) {
      myStack.push(S[i]);
    } else if (cnt_open == N/2 && S[i] !=)
  }
  return 0;
}
