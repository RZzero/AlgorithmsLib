#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
vector<int> Numbers;
int posu;
int N, dummy;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);



    vector<int> pos1;
    vector<int> pos2;
    vector<int> pos3;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> dummy;
        Numbers.push_back(dummy);
    }
    
    if(N == 1 || N == 2){
        cout << 0 << endl;
        return 0;
    }

    pos1.push_back(Numbers[0]);
    pos1.push_back(Numbers[0]+1);
    pos1.push_back(Numbers[0]-1);
    pos2.push_back(Numbers[1]);
    pos2.push_back(Numbers[1]+1);
    pos2.push_back(Numbers[1]-1);
    pos3.push_back(Numbers[2]);
    pos3.push_back(Numbers[2]+1);
    pos3.push_back(Numbers[2]-1);

    set<int> possibles;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                if(abs(pos1[i]-pos2[j]) == abs(pos2[j]-pos3[k])){
                    possibles.insert(abs(pos1[i]-pos2[j]));
                }
            }
        }
    }

    for(auto &l: possibles){
        bool can = true;
        int cnt = 0;
        
        for(int i = 1; i < Numbers.size(); i++){
            
        }
        
        if(can){
            cout << cnt << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    
    return 0;
}
