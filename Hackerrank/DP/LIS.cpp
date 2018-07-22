#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, dum;
    cin >> N;
    vector<int> V;
    vector<int> DP(N,1);
    vector<int> PREV(N,-1);
    
    for(int i = 0; i < N; i++){
        cin >> dum;
        V.push_back(dum);
    }
    
    int longest = -1e9;
    for(int i = 1; i < V.size(); i++){
        for(int j = 0; j < i; j++){
            if(V[j] < V[i] && DP[i] < DP[j] + 1){
                DP[i] = DP[j] + 1;
                PREV[i] = j;
            }
        }
    }
    
    int max_i = -1;
    for(int i = 0; i < N; i++){
        if(DP[i] > longest){
            longest = DP[i];
            max_i = i;
        }
    }

    /*Do backtracking and find the sequence*/

    int cnt = longest - 1;
    cout << longest << endl;
    cout << V[max_i] << " ";
    int previous = PREV[max_i];
    while(cnt){
        cout << V[previous] << " ";
        previous = PREV[previous];
        cnt--;
    }
    return 0;
}
