#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N;
    set<int> whites;
    set<int> blackis;

    cin >> N;
    int cnt1 = 0;
    int cnt0 = 0;
    int before = -1;

    for(int i = 0; i < N; i++){
        int dummy;
        cin >> dummy;
        if(before == -1){
            before = dummy;
        }

        if(dummy == 1 && before == 1){
            cnt1++;
        }else if(dummy == 0 && before == 0){
            cnt0++;
        }else if(dummy == 0 && before == 1){
            whites.insert(cnt1);
            cnt1 = 0;
            cnt0++;
            before = 0;
        }else if(dummy == 1 && before == 0){
            blackis.insert(cnt0);
            cnt0 = 0;
            cnt1++;
            before = 1;
        }
    }
    if(cnt1 != 0)
        whites.insert(cnt1);
    if(cnt0!=0)
        blackis.insert(cnt0);

    // cout << blackis.size() << endl;
    // cout << whites.size() << endl;
    auto bl = blackis.begin();
    if( ( blackis.size() == whites.size() && blackis.size() == 1 && whites.count(*bl)) || (blackis.count(N) || whites.count(N)))
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
