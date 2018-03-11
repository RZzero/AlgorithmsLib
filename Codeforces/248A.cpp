#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, L,R;
    int Ol, Or, Cl, Cr;
    Ol = Or = Cl = Cr = 0;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> L >> R;
        if(L == 0)Cl++;
        else if(L == 1)Ol++;

        if(R == 0)Cr++;
        else if(R == 1)Or++;
    }

    cout << min(Ol,Cl)+min(Or,Cr) << endl;
    return 0;
}
