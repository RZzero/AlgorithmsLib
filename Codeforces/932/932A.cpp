#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    string s;
    cin >> s;

    string ss = s;
    reverse(s.begin(),s.end());
    cout << ss << s << endl;

    return 0;
}
