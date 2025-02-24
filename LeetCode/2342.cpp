#include <bits/stdc++.h>
using namespace std;

int maximumSum(vector<int> &nums) {
  int answer = -1;
  map<int, pair<int, int>> mapa;

  auto sum_of_digits = [&](int n) -> int {
    int sum = 0;
    while (n) {
      sum += n % 10;
      n /= 10;
    }
    return sum;
  };

  for (auto &n : nums) {
    int sum = sum_of_digits(n);
    if (!mapa.count(sum)) {
      mapa[sum] = {-1, n};
    } else {
      pair<int, int> cur = mapa[sum];

      if (cur.first == -1) {
        cur.first = n;
        mapa[sum] = cur;
      } else {
        int a = n;
        int b = cur.first;
        int c = cur.second;

        if (a > b)
          swap(a, b);
        if (a > c)
          swap(a, c);
        if (b > c)
          swap(b, c);

        cur.first = b;
        cur.second = c;

        mapa[sum] = cur;
      }

      answer = max(answer, cur.first + cur.second);
    }
  }

  return answer;
}

int main() {
  vector<vector<int>> test_cases = {
      {18, 43, 36, 13, 7},
      {10, 12, 19, 14},
      {229, 398, 269, 317, 420, 464, 491, 218, 439, 153, 482, 169, 411, 93, 147, 50, 347, 210, 251, 366, 401},
  };

  for (auto &t : test_cases) {
    cout << maximumSum(t) << endl;
  }
  return 0;
}