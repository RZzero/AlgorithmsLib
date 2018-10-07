#include <bits/stdc++.h>

using namespace std; 


int main(){

    int N, D;

    cin >> N>> D;
    vector<int> V;
    int dummy;

    for(int i = 0; i < N; i++){
        cin >> dummy;
        V.push_back(dummy);
    }

    sort(V.begin(),V.end());
    int L = 0, R = V.size() -1;
    int cnt = 0;
    while(L < R){
        
    }

    return 0;
}
