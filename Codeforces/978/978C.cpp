#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, M;

    vector<ull> dorms;
    vector<ull> rooms;
    ull dummy;
    cin >> N >> M;
    vector<ull> prefix(N);
    
    for(int i = 0 ;i < N; i++){
        cin >> dummy;
        dorms.push_back(dummy);
    }
    
    for(int i = 0; i < M; i++){
        cin >> dummy;
        rooms.push_back(dummy);
    }
    
    prefix[0] = dorms[0];

    for(int i = 1; i < dorms.size(); i++){
        prefix[i] = dorms[i] + prefix[i-1];
    }


    for(int i = 0; i < M; i++){
        auto it = lower_bound(prefix.begin(),prefix.end(),rooms[i]);
        ull anw = it-prefix.begin() + 1 == 1 ? rooms[i] : rooms[i]- prefix[it-prefix.begin()-1];
        cout << it-prefix.begin() +1 << " " << anw << endl;
    }
    return 0;
}
