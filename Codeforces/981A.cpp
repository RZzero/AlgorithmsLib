#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

bool is_palindrome(string rs){

    string s = rs;
    reverse(rs.begin(),rs.end());

    for(int i = 0; i < s.size(); i++){
        if(s[i] != rs[i]) return false;
    }

    return true;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    string s;

    cin >> s;

    if(s.size() == 1){
        cout << 0 << endl;
        return 0;
    }
    int maxi = 0;

    for(int i = 0; i < s.size(); i++){
        string ss="";
        for(int j = i; j < s.size(); j++){
            ss+=s[j];
        }
        if(!is_palindrome(ss)){
           maxi = max(maxi, (int)ss.size()); 
        }
    }
    
    cout << maxi << endl;

    return 0;
}
