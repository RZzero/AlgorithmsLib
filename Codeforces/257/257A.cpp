#include <bits/stdc++.h>

using namespace std; 

int main(){

    int N, M, K;
    vector<int> SupplyLineFilters;
    cin >> N >> M >> K;

    int dummy;
    for(int i = 0; i < N; i++){
        cin >> dummy;
        SupplyLineFilters.push_back(dummy);
    }

    sort(SupplyLineFilters.rbegin(),SupplyLineFilters.rend());

    if(M <= K)cout << 0 << endl;
    else{
        int possible_connected_devices = K;
        int i = 0;
        while( possible_connected_devices < M && i < N){
            possible_connected_devices+= SupplyLineFilters[i]-1;
            i++;
        }
        if(possible_connected_devices >= M) cout << i << endl;
        else cout << -1 << endl;
    }
    return 0;
}
