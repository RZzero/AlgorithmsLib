// https://onlinejudge.org/external/120/12015.pdf

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  int T;
  int case_number = 1;
  cin >> T;

  while (T--) {
    vector<pair<string, int>> pages;
    int maxi = -1;
    for (int i = 0; i < 10; i++) {
      string page;
      int rank;
      cin >> page >> rank;
      pages.push_back({page, rank});
      maxi = max(maxi, rank);
    }

    cout << "Case #" << case_number << ":" << endl;
    for (int i = 0; i < pages.size(); i++) {
      if (pages[i].second == maxi) {
        cout << pages[i].first << endl;
      }
    }
    case_number++;
  }
  return 0;
}
