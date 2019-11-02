#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    long long N;
    cin >> N;
    for(long long i = 0; i < N; i++){
      long long number;
      cin >> number;
      long long cnt = 0;
      while (number != 1) {
        if (number % 2 != 0 && number % 5 != 0 && number % 3 != 0) {
          cnt = -1;
          break;
        }
        long long div2, div3, div5;
        div2 = div3 = div5 = 5 * 1e18;

        if (number %2 == 0) {
          div2 = number /2;
        }
        if (number %3 == 0) {
          div3 = 2 * number / 3;
        }
        if (number %5 == 0) {
          div5 = 4 * number / 5;
        }
        number = min({ div2, div3, div5 });
        cnt++;
      }
      cout << cnt << endl;
    }

    return 0;
}
