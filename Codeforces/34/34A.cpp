#include <bits/stdc++.h>

using namespace std; 

int main(){

    int N,dummy;
    vector<int> V;

    cin >> N;
    for(int i =0; i < N; i++){
        cin >> dummy;
        V.push_back(dummy);
    }
    int minix = abs(V[0]-V[V.size()-1]);
    int f = 1; int l = V.size();
    
    for(int i =1; i < N; i++){
        if(abs(V[i-1]-V[i]) < minix){
            f = i; l = i+1;
            minix =  abs(V[i-1]-V[i]);
        }
    }
    cout << f << " " << l << endl;
    return 0;
}
