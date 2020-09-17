#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, K;
    int h;
    cin >> N >> K;

    int PS[150004] = {0};
    
    for(int i = 1; i <= N; i++){
        cin >> h;
        PS[i] = PS[i-1] + h;
    }

    int mini = 1e9;
    int pos = 1;
    // cout << PS[]
    
    for(int i = K; i <= N; i++){
        if(PS[i]-PS[i-K] < mini){
            mini = PS[i]-PS[i-K];
            pos = i-K+1;
        }
    }
    cout << pos << endl;
    return 0;
}

/* 
7 3
1 2 6 1 1 7 1

19  18  16  10  9  8  1  0



0 1 3 9 10 11 18 19


*/