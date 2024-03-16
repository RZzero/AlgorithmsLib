#include <bits/stdc++.h>
using namespace std;
using Long = long long;
using VL = vector<Long>;

Long solution_with_math_and_counting(set<Long> &squares, VL &numbers, map<Long, Long> &mapa) {
  Long answer = 0;
  Long zeroes_ = 0;

  Long max_elemento = *max_element(numbers.begin(), numbers.end());
  for (int i = 0; i < numbers.size(); i++) {
    Long current_number = numbers[i];
    mapa[current_number] = mapa[current_number] - 1;
    if (current_number == 0) {
      zeroes_ += numbers.size() - i - 1;
      continue;
    }

    for (int j = 1; j * j <= max_elemento * max_elemento; j++) {
      Long sq = j * j;
      if (sq % current_number)
        continue;

      Long other_part = sq / current_number;

      if (mapa[other_part] > 0) {
        answer += mapa[other_part];
      }
    }
  }

  return answer + zeroes_;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int N;
  cin >> N;
  vector<Long> numbers(N);
  Long zeroes = 0;

  // 448 cuadrados.
  // 10^2 * 10^5 = 10^7
  map<Long, Long> mapa;
  for (auto &n : numbers) {
    cin >> n;
    mapa[n]++;
  }

  set<Long> squares;

  Long limit = 1LL * (2 * 1e5 * 2 * 1e5) + 1;

  // for (Long i = 1; i * i <= limit; i++) {
  //   Long sq = i * i * 1LL;
  //   squares.insert(sq);
  // }
  // cout << squares.size() << endl;
  Long answer = solution_with_math_and_counting(squares, numbers, mapa);

  cout << answer << endl;
  return 0;
}