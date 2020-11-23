#include <bits/stdc++.h>

using namespace std;

int maximumToys(vector<int> prices, int k) {
  long sum = 0;
  sort(prices.begin(), prices.end());
  int cnt = 0;
  for (int i = 0; i < prices.size(); i++) {
    if (sum + prices[i] > k) break;
    sum += prices[i];
    cnt++;
  }
  return cnt;
}


int main() {
  vector<int> prices = { 1, 12, 5, 111, 200, 1000, 10 };
  int k = 50;
  cout << maximumToys(prices, k) << endl;
  return 0;
}
