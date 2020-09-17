#include <bits/stdc++.h>

using namespace std; 

int main(){

    vector<char> rank = {'6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
    char suit;
    string first,second;
    cin >> suit >> first >> second;


    if(first[1] == second[1]){
        int rank1 =-1;
        int rank2 = 0;

        for(int i = 0; i < rank.size(); i++){

            if(first[0] == rank[i]){
                rank1 = i;
            }
            if(second[0] == rank[i]){
                rank2 = i;
            }    
        }
        
        cout << (rank1 > rank2 ? "YES" : "NO") << endl;
    }else if(first[1] == suit){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
