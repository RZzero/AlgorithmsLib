#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin >> N;
  map<int, int> mapa;
  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;
    mapa[n] = i + 1;
  }

  int Q;
  cin >> Q;
  vector<int> answers;

  for (int i = 0; i < Q; i++) {
    int person_a, person_b;
    cin >> person_a >> person_b;
    answers.push_back(mapa[person_a] < mapa[person_b] ? person_a : person_b);
  }

  for (auto &a : answers)
    cout << a << endl;
  return 0;
}

/*
3
2 1 3
1
2 3

*/