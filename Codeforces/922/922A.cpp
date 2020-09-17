#include <bits/stdc++.h>

using namespace std; 

int main(){

    int x ,y;
    cin >> x >> y;
    
    if(y == 0 || (x > 0 && y == 1)){
        cout << "No" << endl;
        return 0;
    }
    if(y == 1 && x == 0){
        cout <<"Yes"<<endl;
        return 0;
    }

    // Solo puedo tener un numero par de copias
    // si los originales son impares

    if( (x-y+1)%2 == 0 && (x-y+1) >= 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" <<endl;
    }

    return 0;
}
