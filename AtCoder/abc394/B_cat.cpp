#include <bits/stdc++.h>
using namespace std;

bool comparator(string &a, string &b) {
  return a.size() < b.size();
}

int main() {
  int N;
  cin >> N;

  vector<string> strings;
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    strings.push_back(s);
  }

  sort(strings.begin(), strings.end(), comparator);

  for (int i = 0; i < strings.size(); i++) {
    cout << strings[i];
  }
  return 0;
}