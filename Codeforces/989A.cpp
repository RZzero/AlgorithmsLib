#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    string s;
    cin >> s;

    if(s.size() < 3){
        cout << "No" << endl;
        return 0;
    } 

    for(int i = 0; i < s.size(); i++){
        if(s[i] != '.' && i-1 >= 0 && i+1 < s.size()){
            if(s[i-1] != '.' && s[i+1] != '.'){
                if(s[i-1] != s[i] && s[i-1] != s[i+1] && s[i+1] != s[i]){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
