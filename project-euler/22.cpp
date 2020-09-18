#include <iostream>
#include <vector>

using namespace std;
typedef long long Long;

vector<string> filter_names(string &S) {
  vector<string> answer;
  char comilla = '"';
  string coma = ",";

  for (int i = 0; i < S.size();) {
    if (S[i] == comilla) {
      int j = i+1;
      if (j >= S.size()) break;
      string current_name = "";
      while (S[j] != comilla) {
        current_name+=S[j];
        j++;
      }
      if (current_name != coma) {
        answer.push_back(current_name);
      }
      i = j;
    } else { i++; }
  }
  return answer;
}

int main () {
  freopen("names.txt", "r", stdin);

  string names_list;
  Long name_position = 0;
  Long answer = 0;
  while (cin >> names_list) {

    vector<string> names = filter_names(names_list);
    sort(names.begin(), names.end());

    Long current_name_value = 0;
    for (Long i = 0; i < names.size(); i++) {
      for (auto &c: names[i]) {
        current_name_value += ((Long)c-'A')+1;
      }
      answer += (current_name_value * 1LL * (i+1));
    }
  }
  cout << answer << endl;
  return 0;
}