// https://onlinejudge.org/external/113/11340.pdf

#include <iostream>
#include <vector>
#include <iomanip>
#include <map>
using namespace std;
typedef long long Long;

int main (){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int T;
  cin >> T;

  while (T--) {
    map<char,int> mapa;

    int values;
    cin >> values;

    for (int i = 0; i < values; i++) {
      char letter;
      int val;
      cin >> letter >> val;
      mapa[letter] = val;
    }

    int lines;
    cin >> lines;

    string current_line;
    double total_sum = 0;
    cin.ignore();
    for (int i = 0; i < lines; i++) {
      getline(cin, current_line);
      for (int j = 0; j < current_line.size(); j++) {
        if (!mapa.count(current_line[j])) continue;
        total_sum+= mapa[current_line[j]];
      }
    }

    double ans = total_sum / 100.00;
    printf("%.2lf$\n", ans);
  }

  return 0;
}
