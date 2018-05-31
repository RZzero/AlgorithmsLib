#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, M;

    int x, y;
    cin >> N;

    map<int,int> mapa;
    for(int i = 0; i < N; i++){
        cin >> x >> y;
        mapa[x] = max(mapa[x],y);
    }

    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> x >> y;
        mapa[x] = max(mapa[x],y);
    }

    ull sum = 0;
    for(auto &l: mapa){
        sum+=l.second;
    }
    cout << sum << endl;

    return 0;
}
