// https://onlinejudge.org/external/6/630.pdf
#include <bits/stdc++.h>

using namespace std;

bool are_anagram(string s, string t) {
  sort(t.begin(), t.end());
  sort(s.begin(), s.end());
  return s == t;
}

int main() {
  // freopen("630.in", "r", stdin);
  // freopen("630.out", "w", stdout);

  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    vector<string> dictionary(N);
    vector<string> test_words;

    for (auto &word : dictionary)
      cin >> word;
    
    string test = "";
    while (true) {
      cin >> test;
      if(test == "END") break;
      test_words.push_back(test);
    }

    for (auto test_word: test_words) {
      int anagrams_count = 0;
      cout << "Anagrams for: " << test_word << endl;
      for (auto d_word: dictionary) {
        if (are_anagram(test_word, d_word)) {
          anagrams_count++;
          cout << "  " << anagrams_count << ") " << d_word << endl;
        }
      }

      if (!anagrams_count)
        cout << "No anagrams for: " << test_word << endl;
    }

    if (T) cout << endl;
  }
  return 0;
}
