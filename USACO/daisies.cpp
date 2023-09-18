#include <bits/stdc++.h>

using namespace std;

int main () {
  int N;

  cin >> N;
  vector<int> flowers(N);
  for (auto &f: flowers)
    cin >> f;
  
  int answer = N;
  for (int i = 0; i < N; i++) {
    set<int> seto;
    int petals = flowers[i];
    seto.insert(flowers[i]);
    for (int j = i+1; j < N; j++) {
      petals += flowers[j];
      seto.insert(flowers[j]);
      bool isDivisible = petals % (j-i+1) == 0;
      int average = petals / (j-i+1);
      answer += isDivisible && seto.count(average);
    }
  }

  cout << answer << endl;
  return 0;
}