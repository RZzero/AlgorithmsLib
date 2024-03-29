#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  string t_prime = "";

  for (auto &s : S) {
    if (s != 'a')
      t_prime += s;
  }

  bool can_be_splitted_equally = t_prime.size() % 2 == 0;
  auto first_half_equals_second = [&](string t) -> bool {
    return t.substr(0, t.size() / 2) == t.substr(t.size() / 2);
  };

  bool s_prime_matches = t_prime.substr(t_prime.size() / 2) == S.substr(S.size() - t_prime.size() / 2);
  if (can_be_splitted_equally && first_half_equals_second(t_prime) && s_prime_matches) {
    cout << S.substr(0, S.size() - t_prime.size() / 2) << endl;
  } else {
    cout << ":(" << endl;
  }
  return 0;
}