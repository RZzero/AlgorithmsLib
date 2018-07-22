#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

ull dfive(ull n){
    ull cnt = 0;

    while(n%5 == 0 && n > 0){
        cnt++;
        n = n / 5;
    }

    return cnt;
}

ull dtwo(ull n){
    ull cnt = 0;

    while(n%2 == 0 && n > 0){
        cnt++;
        n = n / 2;
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    ull N, K;
    cin >> N >> K;

    ull five = dfive(N);
    ull two = dtwo(N);
    int anw = 0;

    if(min(five,two) >= K){
        cout << 0 << endl;
    }else if(five == 0 && two == 0){
        cout << K*2 << endl;

    }else if(five > two){
        two+= five-two;
        anw+= five-two;
        anw+= (K-five) + (K-two);

        cout << anw << endl;
    }else if(two > five){
        five+= two-five;
        anw+= two-five;
        anw+= (K-five) + (K-two);
        cout << anw << endl;

    }else if(five == two){
        cout << (K-five) * 2 << endl;
    }
    return 0;
}
