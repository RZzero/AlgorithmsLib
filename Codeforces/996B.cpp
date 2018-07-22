#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, dum;
    queue<pair<int,int>> Q;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> dum;
        Q.push(make_pair(dum,i+1));
    }

    ull cnt = 0;
    while(Q.front().first != 0){
        auto cur = Q.front();
        Q.pop();
        
        if(cur.first-Q.size()+1 < 0){
            cur.first = 0;
        }else{
            cur.first = cur.first - Q.size() + 1;
        }
        Q.push(cur);
    }

    cout << Q.front().second << endl;
    return 0;
}
