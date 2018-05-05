#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int n, dummy;
    int sum = 0, counter = 0;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> dummy;
        sum+= dummy;
    }

    for(int i = 1; i <= 5; i++){
        if( ( sum + i ) % (n + 1) != 1) counter++;
    }

    cout << counter << endl;
    return 0;
}
