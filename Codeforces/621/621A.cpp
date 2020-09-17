#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, dum;
    ull sum = 0;
    vector<int> impares;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> dum;
        if(dum%2 == 0) sum+=dum;
        else impares.push_back(dum);
    }
    sort(impares.rbegin(),impares.rend());
    
    int sizee = impares.size();
    if(sizee == 0){
        cout << sum << endl;
        return 0;
    }
    
    if(sizee % 2 != 0 && sizee >= 1){
        sizee--;
    }

    for(int i = 0; i < sizee; i++){
        sum+=impares[i];
    }

    cout << sum << endl;
    return 0;
}
