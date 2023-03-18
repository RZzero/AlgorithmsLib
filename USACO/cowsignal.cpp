#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  freopen("cowsignal.in", "r", stdin);
  freopen("cowsignal.out", "w", stdout);

  int N, M, K;
  cin >> M >> N >> K;
  char originalSignal[M][N];
  char magnifiedSignal[M * K][N * K];
  memset(originalSignal, '#', sizeof(originalSignal));
  memset(magnifiedSignal, '#', sizeof(magnifiedSignal));

  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cin >> originalSignal[i][j];

      int initialMagnifiedI = i == 0 ? i : i * K;
      int initialMagnifiedJ = j == 0 ? j : j * K;

      for (int magI = initialMagnifiedI; magI < initialMagnifiedI + K; magI++)
      {
        for (int magJ = initialMagnifiedJ; magJ < initialMagnifiedJ + K; magJ++)
        {
          magnifiedSignal[magI][magJ] = originalSignal[i][j];
        }
      }
    }
  }

  for (int i = 0; i < M * K; i++)
  {
    for (int j = 0; j < N * K; j++)
    {
      cout << magnifiedSignal[i][j];
    }
    cout << endl;
  }
  return 0;
}