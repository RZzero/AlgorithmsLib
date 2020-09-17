#include <bits/stdc++.h>

using namespace std; 

int main(){

    int N,dummy;
    cin >> N;
    vector<int> V;

    for(int i = 0; i < N; i++){
        cin >> dummy;
        V.push_back(dummy-1);
    }

    if(N == 2){
        cout << "NO" << endl;
        return 0 ;
    }
    for(int i = 0; i < N; i++){
        int f,s,t;
        s = V[i];
        t = V[V[i]];
        f = V[V[V[i]]];

        if(V[s] == t && V[t] == f && V[f] == s){
            cout << "YES" << endl;
            return 0;

        }

    }
    cout << "NO" << endl;
    return 0;
}
