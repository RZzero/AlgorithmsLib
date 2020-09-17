#include <bits/stdc++.h>

using namespace std; 
int N, K;
vector<int> coins = {2,3,4,5};
int memo[500][500];

int DP(int exams, int sum){

    if(exams == N && sum == K) return 0;

    if(memo[exams][sum] > -1) return memo[exams][sum];

    int res = 1e9;
    for(int i = 0; i < coins.size(); i++){
        if(sum + coins[i] <=K){
            res = min(res, (coins[i] == 2 ? 1 + DP(exams+1,sum+coins[i]) : DP(exams+1,sum+coins[i])));
        }
    }

    memo[exams][sum] = res;
    
    return memo[exams][sum];
}

int main(){
    memset(memo,-1, sizeof(memo));
    cin >> N >> K;
    cout << DP(0,0) << endl;
    return 0;
}
