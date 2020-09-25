// https://onlinejudge.org/external/125/12554.pdf
#include <bits/stdc++.h>

using namespace std;

vector<string> birthday_song = {
  "Happy", "birthday", "to", "you",
  "Happy", "birthday", "to", "you",
  "Happy", "birthday", "to", "Rujia",
  "Happy", "birthday", "to", "you",
};

int main() {
  int people;
  cin >> people;

  vector<string> person_names(people);
  for (auto &name: person_names)
    cin >> name;

  bool additional = people % 16;
  int repetitions = (people/16 + (int)additional) * 16;

  int current_person_singing = 0;
  int current_verse = 0;

  for (int i = 1; i <= repetitions; i++) {
    string current_person_name = person_names[current_person_singing % people];
    string verse = birthday_song[current_verse % 16];
    
    cout << current_person_name << ": " << verse << endl;

    current_person_singing++;
    current_verse++;
  }
  return 0;
}
