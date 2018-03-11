#include <bits/stdc++.h>

using namespace std; 

int main(){

    int N;
    string s;
    cin >> N >> s;
    int R,L, E;
    R = L = 0;
    E = -1;
    for(int i = 0; i < N; i++){
        if(s[i] == 'R' && R == 0) R =i+1;
        else if(s[i] == 'L' && L == 0) L = i+1;
        if(s[i] == 'R') E =i+1;
    }
    cout << R << " " << (L == 0 ? E : L)  << endl;
    return 0;
}
