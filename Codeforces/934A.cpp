#include <bits/stdc++.h>

using namespace std; 

int main(){

    int n, m;
    cin >> n >> m;

    vector<int> T,B, T2;

    for(int i = 0; i < n; i++){
        int dummy;
        cin >> dummy;
        T.push_back(dummy);
    }

    for(int i = 0; i < m; i++){
        int dummy;
        cin >> dummy;
        B.push_back(dummy);
    }

    sort(T.begin(),T.end());
    sort(B.begin(),B.end());

    T2 = T;

    T.erase(T.begin() + 0);

    T2.erase(T2.begin()+(n-1));
    
    int maxi1,maxi2;
    maxi1 = maxi2 = -1e9;

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < m; j++){
            maxi1 = max(maxi1,T[i]*B[j]);
        }
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < m; j++){
            maxi2 = max(maxi2,T2[i]*B[j]);
        }
    }
    cout << min(maxi1,maxi2) << endl;
    return 0;
}
