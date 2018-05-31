#include <bits/stdc++.h>

using namespace std;

char table[104][104];

int check(int i, int j){
    vector<int> posx = {0,0,1,1,1,-1,-1,-1};
    vector<int> posy = {-1,1,-1,0,1,1,0,-1};

    int bombs = 0;
    for(int k = 0; k < 8; k++){
        if(table[ i + posy[k] ][ j + posx[k] ] == '*') bombs++;
    }

    return bombs;
}
int main(){

    memset(table,'#',sizeof(table));
    int N, M;
    cin >> N >> M;
    string s;

    int r = 1;
    for(int k = 1; k <= N; k++){
        cin >> s;
        for(int c = 0; c < M; c++){
            table[r][c+1] = s[c];
        }
        r++;
    }

    bool can = true;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            if(table[i][j] != '*'){
                if(table[i][j] == '.'){
                    if(check(i,j) != 0) can = false;
                }else{
                    if(check(i,j) != (int)table[i][j]-'0') can = false;
                }
            } 
        }
    }

    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0 ;
}