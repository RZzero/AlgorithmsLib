#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(string s) {
  string original = s;
  reverse(s.begin(), s.end());
  return s == original;
}

int main(){
  int N;
  cin >> N;

  for(int i = 0; i < N; i++){
    string dum;
    cin >> dum;
    if(is_palindrome(dum)){
      string original = dum;
      sort(dum.begin(), dum.end());
      if(original == dum){
        cout << -1 <<endl;
      }else {
        cout << dum << endl;
      }
    }else {
      cout << dum << endl;
    }
  }
  return 0;
}


// if multiple of 2 cout anw/2
// if not 2 print mult of 2 and one of 3


// 

//abacaba