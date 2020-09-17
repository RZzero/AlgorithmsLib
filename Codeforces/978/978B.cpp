#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N; string s;
    cin >> N >> s;
    
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(i+1 < s.size() && i+2 < s.size()){
            if(s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x'){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
