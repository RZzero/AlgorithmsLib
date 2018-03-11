#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    string s;
    string anw;
    cin >> s;
    // «.», 1 as «-.» and 2 as «--».
    for(int i = 0; i < s.size();){
        if(s[i] == '.'){
            anw+='0';
            i++;
        }else if(i+1 < s.size() && s[i] == '-' && s[i+1] == '.'){
            anw+='1';
            i+=2;
        }else if(i+1 < s.size() && s[i] == '-' && s[i+1] == '-'){
            anw+='2';
            i+=2;
        }
    }
    cout << anw << endl;
    return 0;
}
