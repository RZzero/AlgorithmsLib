#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
int main()
{
    vector<ull> mset;

    for(int i = 0; i <= 63; i++){
        mset.push_back(pow(2,i));
//        cout << pow(2,i) << endl;
    }

    ull n,k;
    cin >> n >> k;
    ull it = 0;

    for(int i = 0; i < mset.size(); i++){
        if(mset[i]<=n)it = mset[i];
    }

    int cur = 0;
    ull anw = 0;
    bool out = false;

    for(int i = mset.size()-1; i >= 0; i--){
        if(mset[i] <= it){
            anw+=mset[i];
        }
        if(anw > 0){
            cur++;
            if(cur >=k){
                out = true;
            }
        }

        if(out) break;
    }
    cout << anw << endl;
//    cout << *lower_bound(mset.begin(),mset.end(),4) << endl;
    return 0;
}