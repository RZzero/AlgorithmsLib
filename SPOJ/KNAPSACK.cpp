#include <bits/stdc++.h>

using namespace std; 
int S,N;
vector<pair<int,int> > items;
int DP(int capacity,vector<pair<int, int> > backpack){

    if(capacity >= S) return 0;

    for(int i = 0; i < backpack.size(); i++){

    }

}
int main(){


    cin >> S >> N;
    int size, value;
    for(int i = 0; i < N; i++){
        cin >> size >> value;
        items.push_back(make_pair(size,value));
    }
    cout << DP(0,items) << endl;
    return 0;
}
