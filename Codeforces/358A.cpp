#include <bits/stdc++.h>

using namespace std; 

bool theyIntersect(int x1, int x2, int x3, int x4){

    //This way I don't have search for all the other possible cases
    int xx1 = min(x1,x2);
    int xx2 = max(x1,x2);
    int xx3 = min(x3,x4);
    int xx4 = max(x3,x4);

    if( (xx1 < xx3 && xx3 < xx2 && xx4 > xx2) ||
        (xx1 < xx4 && xx2 < xx3 && xx4 < xx2)){
            return true;
    }

    return false;
}

int main(){

    int N,dummy;
    vector<int> V;
    bool intersect = false;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> dummy;
        V.push_back(dummy);
    }

    for(int i = 0; i < N-1; i++){
        for(int j = 0; j < N-1; j++){
            if(i == j) continue;
            if(theyIntersect(V[i],V[i+1],V[j],V[j+1])) intersect = true;

        }
    }

    cout << ( intersect == true ? "yes" : "no" ) << endl;

    return 0;
}
