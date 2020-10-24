#include <bits/stdc++.h>

using namespace std;
typedef long long Long;

int main() {
  string S;
  Long N;
  cin >> S >> N;

  Long occurences_a = 0;
  for (auto &s: S) {
    if (s == 'a')
      occurences_a++;
  }

  if (N % S.size() == 0) {
    cout << (N / S.size()) * occurences_a << endl;
  } else {
    Long answer = (N / S.size()) * occurences_a;
    Long extra = N % S.size();

    for(int i = 0; i < extra; i++) {
      if (S[i] == 'a')
        answer++;
    }
    cout << answer << endl;
  }

  return 0;
}
