#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>

using namespace std;

int main () {
  int T;
  cin >> T;

  while (T--) {
    vector<int> numbers;
    int la_suma = 0;
    for (int i = 0; i < 3; i++) {
      int dum; cin >> dum;
      la_suma+= dum;
      numbers.push_back(dum);
    }

    int N; cin >> N;
    la_suma += N;
    sort(numbers.begin(), numbers.end());
    

    N = N - (numbers[2] - numbers[0]);
    numbers[0]+= (numbers[2] - numbers[0]);
  
    N = N - (numbers[2] - numbers[1]);
    numbers[1]+= (numbers[2] - numbers[1]);

    if ((la_suma % 3 == 0) && N > 0 && (N == 0 || N % 3 == 0)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}

/*
1 5 3 2 8
*/