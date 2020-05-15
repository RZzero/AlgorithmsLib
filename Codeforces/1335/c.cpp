#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <stack>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    set<int> seto;
    map<int,int> mapo;

    for (int i = 0; i < N; i++) {
      int dum; cin >> dum;
      seto.insert(dum);
      mapo[dum]++;
    }
    
    int most_repeated_qtty = 0;
    int most_repeated_number = -1;

    for (auto number: mapo) {
      if (number.second > most_repeated_qtty) {
        most_repeated_qtty = number.second;
        most_repeated_number = number.first;
      }
    }

    if (most_repeated_qtty == N && N > 1) {
      cout << 1 << endl;
      return 0;
    }

    if (most_repeated_qtty > N/2) {
      most_repeated_qtty = N/2;
      seto.insert(most_repeated_number);
    }

    for (auto number: mapo) {
      if (number.first != most_repeated_number) {
       seto.insert(number.first);
      }
    }

    cout << min((int)seto.size(), most_repeated_qtty) << endl;
  }
  return 0;
}
