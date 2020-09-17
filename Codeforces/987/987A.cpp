#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    map<string,string> gaunlet;

    gaunlet["purple"] = "Power";
    gaunlet["green"] = "Time";
    gaunlet["blue"] = "Space";
    gaunlet["orange"] = "Soul";
    gaunlet["red"] = "Reality";
    gaunlet["yellow"] = "Mind";

    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        gaunlet.erase(s);
    }
    cout << gaunlet.size() << endl;
    for(auto &l: gaunlet){
        cout << l.second << endl;
    }
    return 0;
}
