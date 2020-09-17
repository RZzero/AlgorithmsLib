#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N,K;
    vector<int> V;
    cin >> N >> K;
    
    for(int i = 0; i < N; i++){
        int dummy;
        cin >> dummy;
        V.push_back(dummy);
    }

    sort(V.begin(),V.end());
    if(K > V.size()){
        cout << -1 << endl;
    }else if(K == 0){
        if(V[0] != 1){
            cout << 1 << endl;
        }else {
            cout << -1 << endl;
        }
    }else if(K == V.size()){
        cout << V[V.size()-1] << endl;
    }else{
        int last_appereance = -1;
        for(int i = 0; i < V.size(); i++){
            if(V[i] == V[K-1]){
                last_appereance = i;
            }
        }
        if(K-1 == last_appereance){
            cout << V[K-1] << endl;
        }else{
            cout << -1 << endl;
        }

    }
    return 0;
}
