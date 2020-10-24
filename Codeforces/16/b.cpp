// #include <bits/stdc++.h>
#include <bits/stdc++.h>

using namespace std;
using Long = long long;


int main(){
  Long answer = 0;
  int N, M;
  cin >> N >> M;

  vector<pair<int,int>> containersAndMatches;
  for (int i = 0; i < M; i++) {
    int containerSize, matchesPerBox;
    cin >> containerSize >> matchesPerBox;
    containersAndMatches.push_back({ matchesPerBox, containerSize });
  }

  sort(containersAndMatches.rbegin(), containersAndMatches.rend());

  int Left = N;
  for(int i = 0 ; i < M; i++){
    if (Left == 0) break;
    auto cur = containersAndMatches[i];
    if (Left < cur.second){
      answer += cur.first * Left;
      Left = 0;
    } else {
      answer += cur.second * cur.first;
      Left-= cur.second;
    }
  }
  cout << answer << endl;
  return 0;
}