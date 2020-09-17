#include <bits/stdc++.h>

using namespace std; 
typedef unsigned long long ull;
typedef long long ll;
typedef vector<pair <int, int> > vpi;

vpi qttys; 
map<int,int> numbers;
int N;
int last;
ll MEMO[(int)1e5 + 5][2];

ll DP(int idx, bool last_was_taken){
    if(idx > last){
        return 0;
    }

    //MEMO
    if(MEMO[idx][last_was_taken] > -1) return MEMO[idx][last_was_taken];

    // Si lo tomo
    ll res1 = -1e9;

    if(!last_was_taken || (last_was_taken && qttys[idx].first-qttys[idx-1].first > 1)){
        res1 = DP(idx+1,true) + qttys[idx].first* (ll)qttys[idx].second;
    }

    // Si no lo tomo
    ll res2 = DP(idx+1,false) + 0;    

    MEMO[idx][last_was_taken] = max(res1,res2);

    return MEMO[idx][last_was_taken];

}
int main(){

    int dummy;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> dummy;
        numbers[dummy]++;
    }

    for(auto const &p: numbers){
        qttys.push_back(make_pair(p.first, p.second));
    }
    memset(MEMO,-1, sizeof MEMO);
    last = qttys.size()-1;
    cout << DP(0,0) <<endl;

    return 0;
}
