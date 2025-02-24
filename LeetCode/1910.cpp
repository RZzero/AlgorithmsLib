#include <bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part) {
  string answer = "";
  int part_size = part.size();

  for (int i = 0; i < s.size(); i++) {
    answer += s[i];
    int answer_size = answer.size();
    while (answer_size >= part_size && answer.substr(answer_size - part_size, part_size) == part) {
      for (int j = 0; j < part_size; j++) {
        answer.pop_back();
      }
    }
  }
  return answer;
}

int main() {
  vector<pair<string, string>> test_cases = {
      {"daabcbaabcbc", "abc"},
      {"axxxxyyyyb", "xy"},
  };
  for (auto &t : test_cases) {
    cout << removeOccurrences(t.first, t.second) << endl;
  }
  return 0;
}