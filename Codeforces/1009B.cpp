#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

bool comp(int a , int b)
{
    if(a == 48 && b == 50) return true;
    else return false;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    string s;
    cin >> s;
    string new_s = "";

    int ones = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1') ones++; 
        else new_s+= s[i];
    }

    bool can = true;
    for(int i = 0; i < new_s.size(); i++){
        if(new_s[i] == '2' && can){
            for(int j = 0; j < ones; j++){
                cout << 1;
            }
            can = false;
        }
        cout << new_s[i];
    }

    if(can){
        for(int i = 0; i < ones; i++){
            cout << 1;
        }
        can =false;
    }
    return 0;
}

/*
0 1
1 0
1 2
2 1

*/