#include <bits/stdc++.h>

using namespace std; 

int main(){

    int N, a,b;

    cin >> N >> a >> b;
    int answ = 0;
    b--;a--;
    while(a!=b){
        answ++;
        a =  a/2;
        b =  b/2;

        cout << a << " " << b << endl;
    }

    if(answ == N/2) cout << "Final!" << endl;
    else cout << answ << endl;
    return 0;
}
