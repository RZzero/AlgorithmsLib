// https://cses.fi/problemset/task/1755

#include <bits/stdc++.h>

using namespace std;

int main () {
  vector<int> alphabet(26);
  string S;
  cin >> S;

  for (int i = 0; i < S.size(); i++) {
    alphabet[S[i]-'A']++;
  }

  int oddCnt = 0;

  for (int i = 0; i < alphabet.size(); i++) {
    if (alphabet[i] > 0 && (alphabet[i] & 1))
      oddCnt++;
  }
  
  if (oddCnt > 1) {
    cout << "NO SOLUTION" << endl;
  } else {
    string even_words = "";
    string uneven_words = "";
    for (int i = 0; i < alphabet.size(); i++) {
      if (!alphabet[i]) continue;
      else if (alphabet[i] & 1) {
        for (int j = 0; j < alphabet[i]; j++)
          uneven_words+= (char)(i+'A');

      } else {
        for (int j = 0; j < alphabet[i] / 2; j++)
          even_words+= (char)(i+'A');

      }
    }

    string reversed_even_words = even_words;

    reverse(reversed_even_words.begin(), reversed_even_words.end());

    cout << even_words + uneven_words + reversed_even_words << endl;
  }
  return 0;
}
