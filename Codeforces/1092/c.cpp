// https://codeforces.com/contest/1092/problem/C
#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>
#include <iomanip>
using namespace std;
using Long = long long;

bool comp(const string &a , const string &b) {
  return a.size() < b.size();
}

bool is_valid_starting(string start_with, vector<pair<int, string>> strings, vector<pair<string, bool>> &answer) {
  bool completely_valid = true;
  string cur = start_with;

  while(cur.size() && completely_valid) {
    bool valid = false;
    for (int j = 0; j < answer.size(); j++) {
      if (answer[j].first == cur && !answer[j].second) {
        answer[j].second = 1;
        valid = true;
        break;
      }
    }

    if (!valid) {
      completely_valid = false;
    }

    cur.pop_back();
  }

  return completely_valid;
}

int main(){
  int T;
  cin >> T;

  int N = (2*T) - 2;

  vector<pair<int, string>> strings;
  vector<pair<string, bool>> answer;

  for (int i = 0; i < N; i++) {
    string cur; cin >> cur;
    strings.push_back({ cur.size(), cur });
    answer.push_back({ cur, 0 });
  }

  sort(strings.begin(), strings.end());

  string first_try = strings[strings.size()-1].second;
  string second_try = strings[strings.size()-2].second;
  //Just consistently select prefixes of size 1, 2, 3 ... N / 2 and mark the others as suffixes
  // Select one of the biggest, start deleting last letter, if get to 0, voala

  int p, c;
  p = 0;
  c = 1;

  if (is_valid_starting(first_try, strings, answer)) {
    p = c = 0;
    for (int i = 0; i < answer.size(); i++) {
      answer[i].second ? p++ : c++;
    }

    if (p == c) {
      for (int i = 0; i < answer.size(); i++) {
        cout << (answer[i].second ? "P" : "S");
      }
      return 0;
    }
  }
  
  if (p!=c) {
    for (auto &answerito: answer) answerito.second = false;
    is_valid_starting(second_try, strings, answer);
    for (int i = 0; i < answer.size(); i++) {
      cout << (answer[i].second ? "P" : "S");
    }
  }

  return 0;
}
