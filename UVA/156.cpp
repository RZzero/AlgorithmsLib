// https://onlinejudge.org/external/1/156.pdf

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string s, char delimiter) {
  vector<string> splitted_strings;
  string current_string = "";
  s += delimiter; // Add padding to count the last one

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == delimiter) {
      bool is_valid = true;

      // Check if the current does not contains the delimiter,
      // e.g at the initial position or multple delimiters one behind other
      for (auto c: current_string) {
        if (c == delimiter) is_valid = false;
      }

      if (is_valid) {
        splitted_strings.push_back(current_string);
      }

      current_string = "";
    } else {
      current_string += s[i];
    }
  }

  return splitted_strings;
}

string to_lowercase_sorted(string s) {
  string current_string = "";
  for (auto &c: s) {
    current_string += tolower(c);
  }

  sort(current_string.begin(), current_string.end());
  return current_string;
}

int main() {
  string s;

  vector<string> original_strings;
  map<string,int> appeareances;

  while (getline(cin, s)) {
    if (s == "#") break;
    
    // let's clean that dirty string first... ewww
    vector<string> splitted_strings = split_string(s, ' ');

    sort(splitted_strings.begin(), splitted_strings.end());
    for (auto &s: splitted_strings) {
      original_strings.push_back(s);

      // lowercase and sort current string for compare between
      // multiple dictionaries
      appeareances[to_lowercase_sorted(s)]++;
    }
  }

  vector<string> ananagrams;
  for (auto s : original_strings) {
    if (appeareances[to_lowercase_sorted(s)] == 1) {
      ananagrams.push_back(s);
    }
  }

  sort(ananagrams.begin(), ananagrams.end());
  for (auto s: ananagrams) {
    cout << s << endl;
  }

  return 0;
}
