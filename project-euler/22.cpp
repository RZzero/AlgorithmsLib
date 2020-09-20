#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

vector<string> filter_names() {
  vector<string> names;
  string name;
  while (getline(cin, name, ',')) {
    string names_with_removed_comma = "";
    for (auto c: name) {
      if (c >= 'A' && c <= 'Z')
        names_with_removed_comma += c;
    }
    names.push_back(names_with_removed_comma);
  }

  return names;
}

int main () {
  freopen("names.txt", "r", stdin);
  freopen("output_names.txt", "w", stdout);

  Long answer = 0;
  vector<string> names = filter_names();
  sort(names.begin(), names.end());

  for (Long i = 0; i < names.size(); i++) {
    Long current_name_value = 0;
    cout << names[i] << endl;
    for (auto c: names[i]) {
      current_name_value += (((Long)c-'A')+1);
    }
    answer += (current_name_value * 1LL * (i+1));
  }

  cout << answer << endl;
  return 0;
}