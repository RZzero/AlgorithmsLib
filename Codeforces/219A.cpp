#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;


int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N; string s;
    cin >> N >> s;
    int FREQ[26] = {0};
    int CYCLE[26] = {0};
    
    for(int i = 0; i < s.size(); i++){
        FREQ[s[i]-'a']++;
    }

    bool can = true;

    for(int i = 0; i < 26; i++){
        if(FREQ[i] % N != 0 && FREQ[i] != 0) can = false;
        if(FREQ[i] != 0) CYCLE[i] = FREQ[i] / N;
    }

    if(N == 1) cout << s << endl;
    else if(!can) cout << -1 << endl;
    else{
        string anw = "";
        for(int i = 0; i < N; i++){
            for(int j = 0; j < 26; j++){
                if(FREQ[j] == 0) continue;
                for(int k = 0; k < CYCLE[j]; k++){
                    anw+= (char) j + 'a';
                }
            }
        }
        cout << anw << endl;
    }
    return 0;
}
