#include <bits/stdc++.h>

using namespace std;

// Generate all subsets of a set of numbers
const vector<int> set_of_numbers = { 5, 7, 11 };
vector<int> current_subset;

void generate_subset(int k) {
  if (k == set_of_numbers.size()) {
    for (int element : current_subset) {
      cout << element << " ";
    }
    cout << endl;
  } else {
    generate_subset(k+1);
    current_subset.push_back(set_of_numbers[k]);
    generate_subset(k+1);
    current_subset.pop_back();
  }
}

int main () {
  generate_subset(0);
  return 0;
}
