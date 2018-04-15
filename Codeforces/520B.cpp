#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
long long L,R;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    cin >> L >> R;
    vector<long long> nums;
    set<long long> numss;
    for(int i = 0; i<=30; i++){
        for(int j = 0; j <=25; j++){
            long long la_para = pow(2,i)*pow(3,j);
            if(la_para <=2000000000 && la_para > 0)
                numss.insert(la_para);
        }

    }

    for(auto &ll: numss){
        // cout << ll << endl;
        nums.push_back(ll);
    }

    auto lt = lower_bound(nums.begin(),nums.end(),L);
    auto gt = upper_bound(nums.begin(),nums.end(),R);
    // cout << nums.size() << endl;
    if(L == R && *lt == L) cout << 1 << endl;
    else if(L == R) cout << 0 << endl;
    else cout << gt-lt << endl;


    return 0;
}
