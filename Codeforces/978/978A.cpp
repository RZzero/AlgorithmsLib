#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, dummy;
    cin >> N;
    set<int> vis;
    vector<int> V;
    
    for(int i = 0; i < N; i++){
        cin >> dummy;
        V.push_back(dummy);
    }
    deque<int> VV;
    for(int i = N-1; i >= 0; i--){
        if(!vis.count(V[i])){
            VV.push_front(V[i]);
            vis.insert(V[i]);
        }
    }

    cout << VV.size() << endl;
    for(int i = 0; i < VV.size(); i++){
        cout << VV[i] << " ";
    }


    return 0;
}