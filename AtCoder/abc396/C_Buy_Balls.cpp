#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
  int N, M;
  cin >> N >> M;

  Long answer = 0;
  vector<int> B(N);
  vector<int> W(M);

  for (auto &b : B)
    cin >> b;
  for (auto &w : W)
    cin >> w;

  sort(B.rbegin(), B.rend());
  sort(W.rbegin(), W.rend());

  int i = 0, j = 0;
  int taken_i = 0;
  for (; i < N && B[i] > 0; i++) {
    answer += B[i];
    taken_i++;
  }

  for (; j < M && j < taken_i and W[j] > 0; j++) {
    answer += W[j];
  }

  while (i < N and j < M and B[i] < 0 and W[j] > 0 and (B[i] + W[j]) > 0) {
    answer += (B[i] + W[j]);
    i++;
    j++;
  }

  cout << answer << endl;
  // Coge todos los positivos de ambos lados.
  // Solo toma un negativo si el de abajo es positivo.
  // 5 -2 -5 -10
  // 8 4 1
  return 0;
}