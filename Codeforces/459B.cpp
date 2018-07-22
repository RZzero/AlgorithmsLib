#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, dummy;
    ull mini,maxi;
    map<ull,ull> flowers;
    mini = 1e12;
    maxi = 0;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> dummy;
        flowers[dummy]++;
        if(dummy < mini) mini = dummy;
        if(dummy > maxi) maxi = dummy;
    }
    ull anw;
    if(mini != maxi){
        anw = flowers[maxi] * flowers[mini];
    }else if(mini == maxi){
        anw = 1LL * ((1LL * N * (1LL * N - 1)) / 2);
    }
    // ull anw = mini != maxi ?   : 1;
    cout << maxi-mini << " " << anw << endl;

    return 0;
}
