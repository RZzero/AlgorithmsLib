#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, dummy;
    int min = 2 * 1e9;
    bool can = true;

    cin >> N;
    int anw = 0;
    for(int i = 0; i < N; i++){
        cin >> dummy;
        if(dummy == min){
            can = false;
        }else if(dummy < min){
            min = dummy;
            can = true;
            anw = i + 1;
        }
    }
    if(!can) cout << "Still Rozdil" << endl;
    else cout << anw << endl; 

    return 0;
}