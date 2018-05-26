#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N,dummy;
    cin >> N;
    vector<int> V;

    for(int i = 0; i < N; i++){
        cin >> dummy;
        V.push_back(dummy);
    }
    int sum = 0;
    while(V.size() != 1){
        if(V[0] >= V[V.size()-1]){
            sum+=V[0];
            V[V.size()-1] = -1 * V[V.size()-1];
            V.erase(V.begin());
        }else{
           sum+= V[V.size()-1];
           V[0] = V[0] * -1;
           V.erase(V.begin()+V.size()-1);
        }
    }
    cout << sum << endl;
    return 0;
}
