#include <bits/stdc++.h>

using namespace std;
typedef long long Long;

int main() {
  int T;
  cin >> T;
  while (T--) {
    vector<Long> numbers;
    int N, K;
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
      int n;
      cin >> n;
      numbers.push_back(n);
    }

    vector<int> bit_sets(31, 0);
    for (int i = 31; i >= 0; i--) {
      for (auto &n : numbers) {
        bit_sets[i] += (bool)(n & (1 << i));
      }
    }

    // Si la cantidad de bits encendidos + K >= cantidad de numeros, enciendelos
    for (int i = 30; i >= 0; i--) {
      if (bit_sets[i] < N && bit_sets[i] + K >= N) {
        for (auto &n : numbers) {
          n = (n | (1 << i));
        }
        K = K - (N - bit_sets[i]);
        bit_sets[i] = N;
      }
    }

    Long answer = numbers[0];
    for (auto &n : numbers) {
      answer &= n;
    }

    cout << answer << endl;
  }
  return 0;
}
