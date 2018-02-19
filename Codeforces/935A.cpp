#include <bits/stdc++.h>

using namespace std; 

int main(){

    int N;
    cin >> N;
    int M = 1;
    int NN = N;
    N--;
    int cnt = 0;
    while(N >= M){

        if(N%M == 0){
            cnt++;
            cout << M << "  " << N << endl;

            // cout << N << " " << M << endl;
        }
        N--;
        M++;

    }
    cout << cnt << endl;

    int cnta = 0;
    for(int i = 2; i <=NN; i++ ){
        if(NN%i == 0){
            cnta++;
        }
    }
    cout << cnta << endl;
    return 0;
}
