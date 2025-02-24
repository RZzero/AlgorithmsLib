#include <bits/stdc++.h>
using namespace std;

bool areAlmostEqual(string s1, string s2) {
  if (s1.size() != s2.size())
    return false;

  int changes = 0;
  int first_differ = -1;
  for (int i = 0; i < s1.size(); i++) {
    if (s1[i] == s2[i])
      continue;

    changes++;

    if (first_differ == -1) {
      first_differ = i;
      continue;
    }

    swap(s2[first_differ], s2[i]);
    break;
  }
  return s1 == s2;
}
int main() {
  vector<pair<string, string>> test_cases = {
      {"bank", "kanb"},
      {"attack", "defend"},
      {"kelb", "kelb"},
  };
  return 0;
}