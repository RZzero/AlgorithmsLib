#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

char table[504][504] = {'.'};
bool check(int x, int y){

    if(table[x+1][y] == 'W' || table[x-1][y] == 'W'  || table[x][y+1] == 'W'  || table[x][y-1] == 'W' )return true;
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, M;

    cin >> N >> M;
    char x;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            cin >> x;
            table[i][j] = x;
        }
    }

    for(int i = 0; i < 504; i++){
        for(int j = 1; j < 504; j++){
            if(table[i][j] == '.') table[i][j] = 'D';
        }
    }
    
    for(int i = 1; i <=N; i++){
        for(int j = 1; j <=M; j++){
            if(table[i][j] == 'S'){
                if(check(i,j)){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    for(int i = 1; i <=N; i++){
        for(int j = 1; j <=M; j++){
            cout << table[i][j];
        }
        cout << "" << endl;
    }



    return 0;
}
