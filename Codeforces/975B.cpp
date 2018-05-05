#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

ull DP(int j, vector<int> force){
    if( j >= 14 ) return 0;
    // cout << j << endl;
    vector<int> res00 = force;
    res00[j]+=1;
    res00[0]-=1;
    
    vector<int> res01 = force;
    res01[j]+=2;
    res01[0]-=2;
    
    ull res0 = 0;
    for(int i = 0; i < 14; i++){
        if(res00[i]%2 == 0) res0+= res00[i];
    }

    ull res1 = 0;
    for(int i = 0; i < 14; i++){
        if(res01[i]%2 == 0) res1+= res01[i];
    }
    cout << res0  <<  " " << res1 << endl; 
    ull res2 = DP(j+1, force);
    ull anw = max(res0, max(res1,res2));
    return anw;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);

    vector<int> arr;
    int dum;
    for(int i = 0; i < 14; i++) {
        cin >> dum;
        arr.push_back(dum);
    }
    ull maxi = 0;

    for(int i = 0; i < 14; i++){
        vector<int> force;
        force.push_back(arr[i]);
        for(int j = i+1; j < 14; j++){
            force.push_back(arr[j]);
        }
        for(int j = i-1; j > 0; j--){
            force.push_back(arr[j]);
        }
        
        maxi = max(maxi,DP(1,force));
    }

    cout << maxi << endl;

    
    return 0;
}
