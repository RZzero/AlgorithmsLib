#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

bool compare(string &a, string &b){
    return a.size() < b.size();
}

bool check(string &a, string &b){
    auto it = b.find(a);
    if(it != string::npos) return true;
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N;
    cin >> N;

    vector<string> anw;
    string s;
    for(int i = 0; i < N; i++){
        cin >> s;
        anw.push_back(s);
    }

    string ss = "";
    
    bool can = true;
    
    sort(anw.begin(),anw.end(), compare);
    
    for(int i = 0; i < anw.size(); i++){
        if(anw[i] == "") ss = anw[i];
        else{
            string cur = anw[i];
            if(!check(ss,cur)) can = false;
            ss = cur;
        }
    }
    
    if(!can) cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        for(int i = 0; i < anw.size(); i++) 
            cout << anw[i] << endl;
    }
    return 0;
}
