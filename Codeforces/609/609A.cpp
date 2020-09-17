#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, dum, fs;
    vector<int> usb;
    cin >> N >> fs;
    for(int i = 0; i < N; i++){
        cin >> dum;
        usb.push_back(dum);
    }

    sort(usb.rbegin(), usb.rend());

    ull sum = 0;
    int cnt = 0;
    for(int i = 0; i < usb.size() && sum < fs; i++){
        sum+=usb[i];
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}
