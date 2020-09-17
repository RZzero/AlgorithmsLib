#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N,M;
    vector<int> V;
    cin >> N >> M;

    for(int i = 0; i < N; i++){
        int dum;cin >> dum;
        if(dum < 0)V.push_back(dum);
    }

    sort(V.begin(),V.end());

    int sum = 0;
    for(int i = 0; i < V.size() && M > 0; i++){
        M--;
        sum+=abs(V[i]);
    }

    cout << sum << endl;
    return 0;
}
