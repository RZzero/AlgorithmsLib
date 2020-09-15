// https://onlinejudge.org/external/119/11926.pdf
#include <stdio.h>
#include <bitset>
using namespace std;
int const LIMIT = 1e6 + 1;

int main () {
  int N, M;

  while (scanf("%d%d", &N, &M) && (N || M)) {
    bitset<LIMIT> mask;
    bool has_conflict = false;

    for (int i = 0; i < N; i++) {
      int start_time, end_time;
      scanf("%d%d", &start_time, &end_time);

      if (has_conflict) continue;
      for (int j = start_time + 1; j <= end_time; j++) {
        if (j >= LIMIT) break;
        if (mask.test(j))
          has_conflict = true;

        mask.set(j, true);
      }
    }

    for (int i = 0; i < M; i++) {
      int start_time, end_time, repetition_interval;
      scanf("%d%d%d", &start_time, &end_time, &repetition_interval);

      if (has_conflict) continue;
      for (int j = start_time + 1; j < LIMIT;) {
        if (j >= LIMIT) break;
        if (mask.test(j)) has_conflict = true;
        
        mask.set(j, true);

        if (j == end_time) {
          start_time+= repetition_interval;
          end_time+= repetition_interval;
          j = start_time + 1;
        } else {
          j++;
        }
      }

    }

    if (has_conflict) printf("%s", "CONFLICT\n");
    else printf("%s", "NO CONFLICT\n");
  }
  return 0;
}