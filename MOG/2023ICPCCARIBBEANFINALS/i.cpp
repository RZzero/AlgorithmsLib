#include <bits/stdc++.h>

using namespace std;

struct MyString {
  string S;
  int string_value;
  int index;
};

int main() {
  int N;
  cin >> N;

  vector<MyString> my_strings;
  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;

    int sum = 0;
    for (auto c: S) {
      sum += (int)c;
    }

    my_strings.push_back({ S, sum, i });
  }

  sort(my_strings.begin(), my_strings.end(),[&](MyString a,MyString b) {
    if (a.string_value == b.string_value) return a.index < b.index;
    return a.string_value < b.string_value;
  });

  for (auto myS: my_strings) {
    cout << myS.S << '\n';
  }
  return 0;
}