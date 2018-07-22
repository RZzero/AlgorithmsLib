#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, dum;
    cin >> N;

    map<int,int> mapa;
    vector<int> V;


    for(int i = 0; i < N; i++){
        cin >> dum;
        V.push_back(dum);
        mapa[dum]++;
    }

    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            ull sum = V[i] + V[j];
            if(power_of_2.count(sum) && !mapa[V[i]].second && !mapa[V[j]].second){
                mapa[V[i]].second++;
                mapa[V[j]].second++;
            }
        }
    }

    int cnt = 0;
    for(auto &it: mapa){
        if(it.second.second == 0) cnt+= it.second.first;
    }
    cout << cnt << endl;


    return 0;
}