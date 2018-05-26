#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N;
    
    cin >> N;
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        if(s[0] == '-'){
            string ss = s.substr(1);
            sort(ss.rbegin(),ss.rend());
            cout << "-" << ss << endl;
        }else{
            sort(s.begin(), s.end());
            
            if(s[0] == '0' && s.size() > 1){
                
                int qtty0=0;
                string ss = "";
                
                for(int i = 0; i < s.size(); i++){
                    if(s[i] == '0') qtty0++;
                    else ss+=s[i];
                }
                
                string anw = "";
                
                anw+= ss[0];
                for(int i = 0; i < qtty0; i++){
                    anw+="0";
                }
                for(int i = 1; i < ss.size(); i++){
                    anw+=ss[i];
                }
                s = anw;
            }
            cout << s << endl;
        }

    }

    return 0;
}
