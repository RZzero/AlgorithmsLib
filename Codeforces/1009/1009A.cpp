#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, M, dum;
    cin >> N >> M;

    vector<int> games;
    vector<int> coins;

    for(int i = 0; i < N; i++){
        cin >> dum;
        games.push_back(dum);
    }

    for(int i = 0; i < M; i++){
        cin >> dum;
        coins.push_back(dum);
    }

    int actual_game = 0;
    int actual_coin = 0;
    int counter = 0;
    while(actual_game < N && actual_coin < M){
        if(coins[actual_coin] >= games[actual_game]){
            actual_game++;
            actual_coin++;
            counter++;
        }else{
            actual_game++;
        }
    }

    cout << counter << endl;
    return 0;
}
