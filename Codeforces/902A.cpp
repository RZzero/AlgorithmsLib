#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N,M;
    cin >> N >> M;
    int L, R;
    
    int Li, Ri;
    for(int i = 0; i < N; i++){
        cin >> Li >> Ri;
        if (i == 0){
            L = Li;
            R = Ri;
        } else if (Li >= L && Li <= R){
            R = max(R, Ri);
        }
    }

    if (L == 0 && R >= M) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
