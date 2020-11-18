#include <bits/stdc++.h>

using namespace std;

int main() {
  string to_replace = "[.]";
  string s = "255.100.50.0";
  string answer = "";
  for (auto &c: s) {
    if (c == '.') answer += to_replace;
    else answer += c;
  }
  return 0;
}
