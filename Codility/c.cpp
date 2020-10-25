#include <bits/stdc++.h>

using namespace std;

int main() {
  
  string S;
  cin >> S;

  int len_of_s = S.size();
  vector<int> SS(len_of_s, 0);
  vector<int> PS(len_of_s, 0);
  for (int i = S.size()-1; i >= 0; i--) {
    char current = S[i];
    bool can = current == 'a';
    if (i == len_of_s-1) SS[i] = (can ? 1 : 0);
    else SS[i] = SS[i+1] + (can ? 1 : 0);
  }

  for (int i = 0; i < len_of_s; i++) {
    char current = S[i];
    bool can = current == 'a';
    if (i == 0) PS[i] = (can ? 1 : 0);
    else PS[i] = PS[i-1] + (can ? 1 : 0);
  }

  int number_of_ways = 0;
  for (int i = 0; i < len_of_s-2; i++) {
    for (int j = i+1; j < len_of_s-1; j++) {
      int up_to_a = PS[i];
      int from_b_to_a = PS[j] - PS[i];
      int from_b_to_c = SS[j+1];
      if (up_to_a == from_b_to_a && from_b_to_a == from_b_to_c) {
        number_of_ways++;
      }
    }
  }
  cout << number_of_ways << endl;
  return 0;
}
