#include <bits/stdc++.h>

using namespace std; 

int main(){

    int n,dummy;
    int of = 0;
    int crimes = 0;
    cin >> n;
    for(int i =0; i < n; i++){
        cin >> dummy;
        if(dummy > 0){
            of+=dummy;
        }else{
            if(of ==0)
                crimes++;
            else
                of--;
        }

    }

    cout << crimes <<endl;
    return 0;
}
