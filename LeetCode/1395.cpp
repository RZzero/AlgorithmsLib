#include <bits/stdc++.h>

using namespace std;

int main () {
  vector<int> rating = {2,5,3,4,1};
  int answer = 0;

  for (int i = 0; i < rating.size(); i++) {
    for(int j = i + 1; j < rating.size(); j++) {
      for(int k = j + 1; k < rating.size(); k++) {
        bool can1 = rating[i] > rating[j] && rating[j] > rating[k];
        bool can2 = rating[i] < rating[j] && rating[j] < rating[k];
        if (can1 || can2) answer++;
      }
    }
  }
  cout << answer << endl;
  return 0;
}
