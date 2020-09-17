#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;


int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    vector<int> V;
    int N, dum;

    cin >> N;
    double sum = 0;
    for(int i = 0; i < N; i ++){
        cin >> dum;
        V.push_back(dum);
        sum += dum;
    }
    sort(V.begin(), V.end());
    
    int i = 0;
    while((int)round(sum/N) != 5){
        V[i] = 5;
        sum = 0;
        for(int i = 0; i < N; i++){
            sum+=V[i];
        }
        i++;
    }
    cout << i << endl;
    return 0;
}
