#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N,M;
    cin >> N >> M;

    int anw = 0;
    for(int i = 0; i <= 1000; i++){
        for(int j = 0; j <= 1000; j++){
            if(i*i + j == N && i + j*j == M) anw++;
        }
    }

    cout << anw << endl;
    return 0;
}
