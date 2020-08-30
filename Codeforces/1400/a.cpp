// https://codeforces.com/problemset/problem/1365/B
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
  int T;
  cin >> T;

  while(T--) {
    int N;
    cin >> N;
    string S;
    cin >> S;

    string answer = "";

    for (int i = 0; i < N; i++) {
      answer+= S[(2*(i+1))-2];
    }
    cout << answer << endl;
  }
  return 0;
}