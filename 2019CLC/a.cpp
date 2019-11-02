#include <bits/stdc++.h>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> VII;
typedef vector<char> VC;
VII ADJ;
string nodes, pattern;

int cnt = 0;
void DFS (int anterior, int u, int seq) {
  for (auto v: ADJ[u]) {
    // cout << v << endl;
    if (pattern[seq + 1] == nodes[v] && v != anterior) {
      if (seq + 1 == pattern.size()-1) cnt+=1;
      else {
        DFS(u, v, seq + 1);
      }
    }
  }
}

int main(){
  int N, L;
  cin >> N >> L;
  cin >> nodes >> pattern;
  ADJ = VII(N);

  for(int i = 0; i < N-1; i++){
    int u,v; cin >> u >> v;
    ADJ[u].push_back(v);
    ADJ[v].push_back(u);
  }

  for(int i = 0; i < N; i++){
    if (nodes[i] != pattern[0]) continue;
    DFS(-1, i, 0);
  }

  cout << cnt << endl;
  
  return 0;
}


/*
4 3
baaa
aba
0 1
0 2
0 3

15 4
ababbabaaabbabb
abab
0 1
1 2
2 3
3 4
2 5
5 6
2 7
0 8
8 9
8 10
10 11
10 12
12 13
12 14




*/