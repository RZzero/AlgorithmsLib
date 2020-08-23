// https://codeforces.com/problemset/problem/1095/C
#include <iostream>
#include <set>
#include <math.h>
#include <vector>

using namespace std;

set<int> powers;

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
  // cin >> N >> K;
  N = 200, K = 197;
  powers = get_powers_of_two();

  if ((K > N) || (K == 1 && !powers.count(N))) {
    cout << "NO" << endl;
  } else {
    vector<int> initial_representation = representation_of_two(N);
    if (K == 1 && powers.count(N)) {
      cout << "YES" << endl;
      cout << N << endl;
      return 0;
    } else if (K < initial_representation.size()) {
      cout << "NO" << endl;
      return 0;
    } else if (K == initial_representation.size()) {
      cout << "YES" << endl;
      for(auto &n: initial_representation) cout << n << " ";
      return 0;
    }
  
    sort(initial_representation.rbegin(), initial_representation.rend());
  
    for (int i = 0; i < initial_representation.size(); i++) {
      cout << initial_representation[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
