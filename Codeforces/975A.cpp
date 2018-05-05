#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N;
    cin >> N;
    map<string,bool> mapa;
    
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        set<char> ms;
        string ss="";
        
        for(int j = 0; j < s.size(); j++){
            ms.insert(s[j]);
        }

        for(auto &l: ms){
            ss+=l;
        }
        mapa[ss] = true;
    }
    cout << mapa.size() << endl;
    return 0;
}
