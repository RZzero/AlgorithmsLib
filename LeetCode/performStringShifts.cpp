#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

string stringShift(string s, vector<vector<int>>& shift) {
  int left, right;
  left = right = 0;

  for (int i = 0; i < shift.size(); i++) {
    if (shift[i][0] == 0) left+= shift[i][1];
    if (shift[i][0] == 1) right+= shift[i][1];
  }

  string answer(s.size(), 'c');
  answer.resize(answer.size(), 'c');

  if (left == right) return s;

  // only perform right shifts
  if (right > left) {
    int diff = right-left;
    for (int i = 0; i < s.size(); i++) {
      answer[((i + diff) % s.size())] = s[i];
    }
  } else {
  //only perform left shifts
    int diff = left-right;
    for (int i = 0; i < s.size(); i++) {
      int rotations = diff % s.size();
      int new_pos = s.size() - rotations + i;
      
      if (new_pos >= s.size()) {
        new_pos = new_pos - s.size();
      }
      answer[new_pos] = s[i];
    }
  }
  return answer;
}

int main () {

  vector<vector<int>> test {
    { 1, 1 },
    { 1, 1 },
    { 0, 2 },
    { 1, 3 },
  };
  string s = "abcdefg";

  cout << stringShift(s, test) << endl;
  return 0;
}