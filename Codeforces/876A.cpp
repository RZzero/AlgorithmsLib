#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
int N,a,b,c;

int DP(int M, int cur, int lastaken = -1){

    if(M>= N-1) return 0;

    int res1 = (int)1e9;
    int res2 = (int)1e9;

    if(cur == 0){
        res1 = lastaken != 1 && M < 1 ? a + DP(M+1,1,0) : (int)1e9;
        res2 = lastaken != 2 && M < 1 ? b + DP(M+1,2,0) : (int)1e9;
    }else if(cur == 1){
        res1 = lastaken != 0 && M < 1 ? a + DP(M+1, 0,1) : (int)1e9;
        res2 = lastaken != 2 && M < 1 ? c + DP(M+1, 2,1) : (int)1e9;
    }else{
        res1 = lastaken != 0 && M < 1 ? b + DP(M+1, 0,2) : (int)1e9;
        res2 = lastaken != 1 && M < 1 ? c + DP(M+1,1,2) : (int)1e9;
    }

    return min(res1,res2);
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    cin >> N >> a >> b >> c;

    int res = 1e9;
    for(int i = 0; i < 3; i++){
        res = min(res,DP(0,i));
        // cout << res << endl;
    }
    cout << res << endl;
    return 0;
}
