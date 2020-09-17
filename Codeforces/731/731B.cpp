#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int arr[N];

  for(int i = 0; i < N; i++){
    cin >> arr[i];
  }

  bool can = true;
  bool carrying = false;
  for(int i = 0; i < N; i++){
    if (arr[i] % 2 != 0 && arr[i] != 0 && !carrying){
      carrying = true;
    } else if (arr[i] % 2 != 0 && arr[i] != 0 && carrying) {
      carrying = false;
    } else if (carrying && arr[i] == 0) {
      can = false;
    }
  }
  cout << (can && !carrying ? "YES" : "NO") << endl;
  return 0;
}