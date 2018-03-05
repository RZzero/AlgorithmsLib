#include <bits/stdc++.h>

using namespace std; 

int main(){

    int N;
    vector<string> sol;
    string s;

    bool can  = false;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s;
        for(int j = 1; j < s.size() && can == false; j++){
            if(s[j-1] == 'O' && s[j] == 'O'){
                s[j-1] = '+';
                s[j] = '+';
                can = true;
            }
        }
        sol.push_back(s);
    }

    if(can){
        cout << "YES" << endl;

        for(int i = 0; i < sol.size(); i++){
            cout << sol[i] << endl;
        }

    }else cout << "NO" << endl;
    return 0;
}
