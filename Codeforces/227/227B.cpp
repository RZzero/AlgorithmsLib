#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
int Vasya[100002];
int Petya[100002];
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int N,Q,v,p,q;
    cin >> N;
    v = 1; p = N;
    for(int i = 0; i < N; i++){
        int n; cin >> n;
        Vasya[n] = v;
        Petya[n] = p;
        p--;
        v++;
    }    
    ull sum1 = 0; ull sum2 = 0;
    cin >> Q;
    for(int i = 0; i < Q; i++){
        int q; cin >> q;
        sum1+=Vasya[q];
        sum2+=Petya[q];
    }
    cout << sum1 << " " << sum2 << endl;

    return 0;
}
