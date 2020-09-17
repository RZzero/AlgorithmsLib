#include <bits/stdc++.h>

using namespace std; 

int main(){

    int N,dummy;
    int maxi = -1;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> dummy;
        maxi = max(min(dummy-1,(int)1e6-dummy),maxi);
    }
    cout << maxi << endl;

    return 0;
}
