#include <bits/stdc++.h>

using namespace std; 

int main(){

    string dg1, dg2;
    cin >> dg1 >> dg2;

    if(dg1.size() != dg2.size()){
        cout << "NO" << endl;
    }else{
        vector<int> Positions;
        for(int i = 0; i < dg2.size(); i++){
            if(dg1[i] != dg2[i]){
                Positions.push_back(i);
            }
        }

        if(Positions.size() != 2){
            cout << "NO" << endl;
        }else{
            swap(dg1[Positions[0]],dg1[Positions[1]]);
            for(int i = 0; i < dg1.size(); i++){
                if(dg1[i] != dg2[i]){
                    cout << "NO" << endl;
                    return 0;
                }
            }
            cout << "YES" << endl;
        }
    }
    return 0;
}
