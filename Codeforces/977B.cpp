#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    string s;int n;
    map<string,int> mapa;
    cin >> n >> s;

    for(int i = 1; i < s.size(); i++){
        string ss = "";
        ss+=s[i-1];
        ss+=s[i];
        // cout << ss << endl;
        mapa[ss]++;
    }
    
    string anw;
    int maxa = -1;
    // cout << mapa.size() << " size"<< endl;
    for(auto &l: mapa){
        // cout << l.second << endl;
        if(l.second > maxa){
            anw = l.first;
            maxa = l.second;
        }
    }
    cout << anw << endl;

    return 0;
}
