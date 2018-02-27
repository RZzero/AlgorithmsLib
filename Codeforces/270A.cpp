#include <bits/stdc++.h>

using namespace std; 

int main(){

    int T,casE;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> casE;
        if(360%(180-casE)  == 0)cout << "YES" << endl;
        else cout << "NO" << endl;
    
    }

    return 0;
}