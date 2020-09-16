// https://cses.fi/problemset/task/1083
#include <cstdio>
#include <vector>

using namespace std;

int main () {
  int N;
  scanf("%d", &N);

  vector<bool> numbers(N+1, false);

  for (int i = 0; i < N-1; i++) {
    int dum;
    scanf("%d", &dum);
    numbers[dum] = true;
  }

  int answer;

  for (int i = 1; i <= N; i++) {
    if (!numbers[i]) {
      answer = i;
    }
  }

  printf("%d", answer);
  return 0;
}
