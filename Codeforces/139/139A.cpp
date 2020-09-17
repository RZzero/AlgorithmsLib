#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int target;
    int days[7];
    cin >> target;

    for(int i = 0; i < 7; i++){
        cin >> days[i];
    }

    int sum = 0;
    int cur = 0;
    while(sum < target){
        sum+=days[cur];
        if(sum >= target) break;

        cur++;
        if(cur > 6) cur = 0;
    }
    cout << (cur+1) << endl;
    return 0;
}
