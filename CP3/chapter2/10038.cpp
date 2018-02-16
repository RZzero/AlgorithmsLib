#include <bits/stdc++.h>

using namespace std; 

bool isJolly(int &N, bool *Differences){

    for(int i = 1; i < N; i++){
        if(Differences[i] == false) return false;
    }

    return true;
}

int main(){

    int N, dummy;
    vector<int> Numbers;
    bool Differences[(int)1e5];

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> dummy;
        Numbers.push_back(dummy);
    }
    
    for(int i = 0; i < N-1; i++){
        Differences[ abs(Numbers[i]-Numbers[i+1]) ] = true;
    }

    cout << (isJolly(N, Differences) == true ? "Jolly" : "Not jolly") << endl;

    return 0;
}
