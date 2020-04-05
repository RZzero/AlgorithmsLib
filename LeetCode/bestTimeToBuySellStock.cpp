#include <iostream>
#include <vector>
using namespace std;

int MEMO[(int)1e5 + 5][(int)1e5 + 5];
int DP (int idx, bool lastBuy, vector<int>& prices) {
  if (idx >= prices.size()) return 0;

  // can buy
  int res1 = 0;

  if (!lastBuy) {
    // Take max from buying or not buying this day
    res1 = max();
  }

  // Can sell

  // Decide to sell

  // Decide not to sell
  
  return MEMO[idx][lastBuy];
}

int maxProfit(vector<int>& prices) {
  return DP(0, false, prices);
}

int main(){
  return 0;
}