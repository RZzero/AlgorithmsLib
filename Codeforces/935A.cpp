#include <bits/stdc++.h>

using namespace std; 

int main(){

    int N;
    cin >> N;
    int M = 1;
    N--;
    int cnt = 0;
    while(N >= M){

        if(N%M == 0){
            cnt++;
            
        }
        N--;
        M++;

    }
    cout << cnt << endl;


    return 0;
}
