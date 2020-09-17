#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, M;
    string s;
    cin >> N >> M >> s;

    for(int i = 0; i < N; i++){
        if(i + M < N){
            if(s[i] == s[i + M] || (s[i + M] == '.' && s[i]!='.') ){
                s[i + M] = s[i]; 
            }else{
                cout << i << endl;
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << s << endl;
    return 0;
}
