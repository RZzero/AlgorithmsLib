#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, rotations;
  cin >> N >> rotations;
  vector<int> numbers(N);
  vector<int> answer(N);

  for (auto &number : numbers)
    cin >> number;

  for (int i = 0; i < N; i++) {
    answer[i] = numbers[(i+rotations) % N];
  }
  
  for (auto &a: answer)
    cout << a << " ";

  cout << endl;
  return 0;
}
