#include <bits/stdc++.h>
using namespace std;

vector<int> minOperations(string boxes) {
  int ones_left = 0;
  int ones_right = 0;
  int sum_left = 0;
  int sum_right = 0;

  int size_of_boxes = boxes.size();
  vector<int> answer;
  for (int i = 1; i < size_of_boxes; i++) {
    if (boxes[i] == '1') {
      sum_right += i + 1;
      ones_right++;
    }
  }

  for (int i = 0; i < size_of_boxes; i++) {
    if (i == 0) {
      answer.push_back(abs(sum_right - ones_right));
      if (boxes[i] == '1') {
        ones_left++;
        sum_left = i + 1;
      }
    } else {
      ones_right = boxes[i] == '1' ? ones_right - 1 : ones_right;
      sum_right = boxes[i] == '1' ? sum_right - (i + 1) : sum_right;

      int calc = abs(sum_right - ((i + 1) * ones_right));
      calc += abs(sum_left - ((i + 1) * ones_left));

      answer.push_back(calc);

      ones_left = boxes[i] == '1' ? ones_left + 1 : ones_left;
      sum_left = boxes[i] == '1' ? sum_left + (i + 1) : sum_left;
    }
  }

  return answer;
}

int main() {
  vector<string> boxes = {"110", "001011"};
  for (auto &b : boxes) {
    auto answer = minOperations(b);
    cout << "[";
    for (auto &a : answer) {
      cout << a << ",";
    }
    cout << "]" << endl;
    // cout << minOperations(b) << endl;
  }
  return 0;
}