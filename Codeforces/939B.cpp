#include <bits/stdc++.h>

using namespace std; 
typedef unsigned long long ull;

int main(){
    ull N, K,selected=1;
    long long mini = 1e18;
    ull type;
    cin >> N >> K;
    ull qtty  = N;
    for(int i = 0; i < K; i++){
        ull cur; cin >> cur;
        if(N-(N/cur)*cur <= qtty){
            selected = cur;
            qtty  = N-(N/cur)*cur;
            type = i+1;
        }
    }
    if(N == 0) cout << 1 << " " << 0 << endl;
    else cout << type << " " << N/selected << endl;

    return 0;
}