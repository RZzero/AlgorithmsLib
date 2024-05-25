#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
  int N;
  cin >> N;
  vector<string> competitors;
  Long sum_rating = 0;
  for (int i = 0; i < N; i++) {
    string s;
    int rating;
    cin >> s >> rating;
    sum_rating += rating;
    competitors.push_back(s);
  }
  // cout << "asd" << endl;
  sort(competitors.begin(), competitors.end());

  Long ideal = sum_rating % N;
  cout << competitors[ideal] << endl;
  return 0;
}