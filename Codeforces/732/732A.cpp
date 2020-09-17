#include <bits/stdc++.h>

using namespace std; 

int main(){

    int k, r;
    cin >> k >> r;

    int cnt = 1;
    int l = k;
    while(true){
        if(l%10 == 0 || l%10 == r){
            cout << cnt << endl;
            return 0;
        }

        cnt++;
        l+=k;
    }

    return 0;
}
    