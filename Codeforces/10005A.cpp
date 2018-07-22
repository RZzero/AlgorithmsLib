#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, dum;
    vector<int> steps_per_stairway;
    vector<int> V;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> dum;
        V.push_back(dum);
    }
    
    for(int i = 0; i < N - 1; i++){
        if(V[i+1] == 1){
            steps_per_stairway.push_back(V[i]);
        }
    }
    steps_per_stairway.push_back(V[N-1]);

    cout << steps_per_stairway.size() << endl;
    for(int i = 0; i < steps_per_stairway.size(); i++){
        cout << steps_per_stairway[i] << " ";
    }
    return 0;
}
