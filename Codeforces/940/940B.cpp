#include <bits/stdc++.h>

using namespace std; 
typedef unsigned long long ull;
ull N, K, A, B;
map<ull,ull> mmap;

ull DP(ull cur){

    if(cur == 1){
        return 0;
    }
    if(mmap[cur] > 0) return mmap[cur];
    ull res = 4 * 1e9;
    ull res1 = 4 * 1e9;
    ull res2 = 4 * 1e9;

    if(cur%K == 0){
        res1 =B + DP(cur/K);
    }

    res2 = A + DP(cur-1);
    
    res = min(res1,res2);
    mmap[cur] = res;
    return res;

}
int main(){


    cin >> N >> K >> A >> B;
    cout << DP(N) << endl;

    return 0;
}
