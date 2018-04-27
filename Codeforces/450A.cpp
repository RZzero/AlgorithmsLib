#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    deque<pair<int,int>> q;
    int table[104] = {0};
    
    int N, M, a;
    
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> a;
        q.push_back(make_pair(i+1,a));
    }

    while(!q.empty()){
        if(table[q.front().first] + M < q.front().second){
            table[q.front().first]+=M;
            auto temp = q.front();
            q.pop_front();
            q.push_back(temp);
        }else{
            if(q.size() == 1) 
                cout << q.front().first << endl;
            
            q.pop_front();
        }
    }


    return 0;
}
