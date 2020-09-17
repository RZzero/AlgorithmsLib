#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, A, B, C;

    cin >> A >> B >> C >> N;

    int total = N;

    total-= A-C;
    total-= B-C;
    total-= C;
    
    // cout << "Hello World! " << endl;
    if(total >= 1 && A-C >= 0 && B-C >= 0 && C >= 0){
        cout << total << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}
