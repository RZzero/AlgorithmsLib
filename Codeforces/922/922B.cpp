#include <bits/stdc++.h>

using namespace std; 

int main(){

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <=n; k++){
                if((i^j^k) == 0){
                    cout << "asd " << (i^j^k) <<endl;
                    cout << i << " " << j << " " << k <<  endl; 
                }
            }

        }
    }

    return 0;
}
