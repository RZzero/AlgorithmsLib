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
    int cnt = 0;
    sort(V.begin(),V.end());
    int cnt1, cnt2;
    cnt1 = cnt2 = 0;
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; i++){
            if(abs(V[i]-V[j]) > D){
                cnt1++;
            }
        }
    }
    cout << cnt1 << endl;
    return 0;
}
