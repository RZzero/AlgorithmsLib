#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VII;

int DENOMS[5] = {1, 5, 10, 20, 100};

// int DP(){

// }
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N;
    cin >> N;
    
    int cnt = 0;
    
    while(N >= 100){
        N-=100;
        cnt++;
    }

    while(N >= 20){
        N-=20;
        cnt++;
    }

    while(N >= 10){
        N-=10;
        cnt++;
    }

    while(N >= 5){
        N-=5;
        cnt++;
    }

    while(N >= 1){
        N-=1;
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}
