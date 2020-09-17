#include <bits/stdc++.h>

using namespace std; 

int main(){

    int N, dummy;
    set<int> seto;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> dummy;
        if(dummy != 0){
            seto.insert(dummy);
        }

    }


    cout << seto.size() << endl;
    return 0;
}
