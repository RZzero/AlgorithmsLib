// https://onlinejudge.org/external/4/454.pdf
#include <bits/stdc++.h>

using namespace std;

bool are_anagrams(string a, string b) {
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  return a == b;
}

string clean_phrase(string s) {
  string cleaned_phrase = "";
  for (auto c: s) {
    if ((c >= 'a' && c <= 'z')
      || (c >= 'A' && c <= 'Z')) {
        cleaned_phrase += c;
    }
  }
  return cleaned_phrase;
}

int main() {
  // freopen("454.in", "r", stdin);
  // freopen("454.out", "w", stdout);

  int T;
  cin >> T;
  cin.ignore();
  cin.ignore();
  while (T--) {
    string phrase;
    set<string> unique_phrases;
    vector<string> phrases;

    while (getline(cin, phrase)) {
      if (phrase == "") break;
      unique_phrases.insert(phrase);
    }

    for (auto el: unique_phrases)
      phrases.push_back(el);

    sort(phrases.begin(), phrases.end());

    for (int i = 0; i < phrases.size(); i++) {
      for (int j = i+1; j < phrases.size(); j++) {
        if (are_anagrams(clean_phrase(phrases[i]), clean_phrase(phrases[j]))) {
          cout << phrases[i] << " = " << phrases[j] << endl;
        }
      }
    }
    if (T) cout << endl;
  }
  return 0;
}
