// https://onlinejudge.org/external/115/11559.pdf
#include <bits/stdc++.h>

using namespace std;
typedef long long Long;

int main () {
  // freopen("11559.in", "r", stdin);
  // freopen("11559.out", "w", stdout);
  int P, B, H, W;
  while (cin >> P >> B >> H >> W) {
    Long answer = INT_MAX;

    for (int i = 0; i < H; i++) {
      int cost_per_night;
      cin >> cost_per_night;
      vector<int> beds_available(W);

      bool hotel_has_capacity = false;
      for (auto &b: beds_available) {
        cin >> b;
        if (b >= P) hotel_has_capacity = true;
      }

      Long cost_of_staying_at_this_hotel = cost_per_night * 1LL * P;
      if (cost_of_staying_at_this_hotel > B || !hotel_has_capacity) continue;


      answer = min(answer, cost_of_staying_at_this_hotel);
    }

    if (answer < INT_MAX) {
      cout << answer << endl;
    } else {
      cout << "stay home" << endl;
    }
  }

  return 0;
}

// Participants // Budget // Hotels to consider // Weeks_to_consider
// Cost per person on the hotel
// Number of beds available each weekend at the hotel