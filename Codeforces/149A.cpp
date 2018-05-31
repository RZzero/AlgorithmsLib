#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, dum;
    vector<int> V;

    cin >> N;

    for(int i = 0; i < 12; i++){
        cin >> dum;
        V.push_back(dum);
    }

    sort(V.rbegin(), V.rend());

    int sum = 0;
    int qtt = 0;
    for(int i = 0; i < 12; i++){
        if(sum >= N) break;
        sum+=V[i];
        qtt++;
    }

    if(sum < N) cout << -1 << endl;
    else cout << qtt <<endl;
    return 0;
}
