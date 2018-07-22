#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N;
    int PSF[200004] = {0};
    int PSB[200004] = {0};
    int ARR[200004] = {0};

    cin >> N;
    vector<int> V;
    int dummy;    
    int Juniors = 0;
    for(int i = 1; i <= N; i++){
        cin >> dummy;
        ARR[i] = dummy;
        if(dummy == 0) Juniors++;
    }
    
    
    int last_senior = -1e9;
    
    for(int i = 1; i <= N; i++){
        if(ARR[i] == 1) last_senior = i;
        PSF[i] = i - last_senior;
    }

    last_senior = 1e9;
    
    for(int i = N; i >= 1; i--){
        if(ARR[i] == 1) last_senior = i;
        PSB[i] = last_senior - i;
    }
    cout << Juniors << endl;
    for(int i = 1 ; i <= N; i++){
        if(ARR[i] == 0){
            cout << min(PSF[i],PSB[i]) << endl;
        }
    }
    return 0;
}
