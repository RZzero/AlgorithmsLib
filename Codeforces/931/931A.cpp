#include <bits/stdc++.h>

using namespace std; 
typedef unsigned long long ull;
int main(){

    ull a ,b, mini, maxi;
    cin >> a >> b;
    mini = min(a,b);
    maxi = max(a,b);

    ull dif = maxi-mini;
    // cout << dif << endl;
    if(dif%2 == 0){
        ull N = dif/2;
        cout << N * (N+1)<< endl; 
    }
    else{
        ull N = (dif+1) /2;
        cout << (N * (N+1)) - N << endl;
    }
    return 0;
}