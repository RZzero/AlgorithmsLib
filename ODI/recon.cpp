#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    string a,b;
    cin >> a >> b;
    map<char,int> mapa;
    map<char,int> mapb;

    for(int i = 0; i < a.size(); i++){
        mapa[a[i]]++;
    }

    for(int i = 0; i < b.size(); i++){
        mapb[b[i]]++;
    }

    for(int i = 0; i < a.size(); i++){
        if(mapa[a[i]] != mapb[a[i]]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "SI" << endl;

    return 0;
}
