#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, dum;
    int size_of_LIS = 0;
    ll last_number = 0;
    vector<int> V;
    map<ll,int> DP;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> dum;
        V.push_back(dum);
    }

    for(int i = 0; i < N; i++){
        ll current = V[i];
        DP[current] = max(DP[current],DP[current - 1] + 1);
        if (DP[current] > size_of_LIS){
            size_of_LIS = DP[current];
            last_number = current; 
        }
    }

    vector<int> answer;
    for(int i = N - 1; i >= 0; i--){
        if(V[i] == last_number){
            answer.push_back(i + 1);
            last_number--;
        }
    }

    cout << size_of_LIS << endl;
    for(int i = answer.size() - 1; i >= 0; i--){
        cout << answer[i] << " ";
    }
    return 0;
}
