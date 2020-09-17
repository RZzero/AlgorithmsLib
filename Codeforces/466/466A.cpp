#include <bits/stdc++.h>

using namespace std; 
int N, M, A, B;
int MEMO[1004];
int DP(int R){

    if(R >= N) return 0;

    if(MEMO[R] > -1) return MEMO[R];

    int res1 = B + DP(R+M);
    int res2 = A + DP(R+1);

    int res = min(res1,res2);

    MEMO[R] = res;

    return MEMO[R];
}
int main(){
    memset(MEMO, -1, sizeof(MEMO));
    cin >> N >> M >> A >> B;
    cout << DP(0) << endl;

    return 0;
}
