#include <bits/stdc++.h>

using namespace std; 

int main(){

    int N;
    string S;
    cin >> N >> S;
    int x,y;
    x = y = 0;
    
    int cnt = 0;
    char cur;

    S[0] == 'R' ? cur = 'F' : cur = 'S';
    
    for(int i = 0; i < S.size(); i++){

        S[i] == 'U' ? y++ : x++;

        if(x > y && cur == 'S'){
            cnt++;
            cur = 'F';
            
        }else if(y > x && cur == 'F'){

            cnt++;
            cur = 'S';
        }
    }

    cout << cnt << endl;
    return 0;
}
