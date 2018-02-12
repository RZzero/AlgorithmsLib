#include <bits/stdc++.h>

using namespace std; 

bool isJolly(int &N, vector<int> &Differences){

    sort(Differences.begin(),Differences.end());

    for(int i = 0; i < N-1; i++){
        if(i+1 != Differences[i]) return false;
    }


    return true;

}

int main(){

    int N, dummy;
    vector<int> Numbers, Differences; 

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> dummy;
        Numbers.push_back(dummy);
    }
    
    for(int i = 0; i < N-1; i++){
        Differences.push_back(abs(Numbers[i]-Numbers[i+1]));
    }

    cout << (isJolly(N, Differences) == true ? "Jolly" : "Not jolly") << endl;

    return 0;
}
