// https://codeforces.com/problemset/problem/1095/C
#include <iostream>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

set<int> powers;

// Analizing numbers in binary representation
string to_bin(int N) {
  string answer = "";
  while (N) {
    if (N & 1) {
      answer += '1';
    } else {
      answer += '0';
    }
    N >>= 1;
  }

  reverse(answer.begin(), answer.end());
  return answer;
}

set<int> get_powers_of_two() {
  set<int> powers;
  for (int i = 0; i < 31; i++) {
    powers.insert(pow(2,i));
  }
  return powers;
}

vector<int> representation_of_two(int N) {
  vector<int> anw;
  int j = 0;
  while (N) {
    if (N & 1) {
      anw.push_back(pow(2, j));
    }
    N >>= 1;
    j++;
  }
  return anw;
}

int main () {
  int N, K;
  cin >> N >> K;
  powers = get_powers_of_two();
  vector<int> binary_representation = representation_of_two(N);

  if ((K > N) || (K == 1 && !powers.count(N)) || (K < binary_representation.size())) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;

    for (int i = 0; binary_representation.size() != K;) {
      if (binary_representation[i] == 1) {
        i++;
      } else {
        int next_split = binary_representation[i] / 2;
        binary_representation.push_back(next_split);
        binary_representation[i] = next_split;
        if (next_split == 1) i++;
      }
    }

    for (int i = 0; i < binary_representation.size(); i++) {
      cout << binary_representation[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
