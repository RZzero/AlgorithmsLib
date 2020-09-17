#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, K;
    cin >> N >> K;
    int counter = 0;
    while(counter < K){
        if(N % 10 != 0){
            N = N - 1;

        }else{
            N = N / 10;
        }
        counter++;
    }

    cout << N << endl;
    return 0;
}
