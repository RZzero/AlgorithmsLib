#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;

bool comparison(const pair<char,ull> &a, const pair<char,ull> &b){
    return a.second > b.second;
}

int main(){
    ull N,M;
    string s;
    cin >> N >> M >> s;
    
    ull FREQ[26] = {0};
    vector<pair<char,ull>> V;

    for(ull i = 0; i < s.size(); i++){
        FREQ[s[i]-'A']++;
    }
    
    for(ull i = 0; i < 26; i++){
        if(!FREQ[i]) continue;
        V.push_back(make_pair((char)i+'A',FREQ[i]));
    }

    sort(V.begin(),V.end(),comparison);
    
    ull anw = 0;
    ull cnt = 0;
    for(ull i = 0; i < V.size() && cnt < M; i++){
        if(cnt + V[i].second <= M){
            cnt+=V[i].second;
            anw+=V[i].second * V[i].second;
        }else if(cnt + V[i].second > M){
            ull cnt_to_M = M-cnt;
            cnt+=cnt_to_M;
            anw+=cnt_to_M * cnt_to_M;
        }
    }
    cout << anw << endl;
    return 0;
}