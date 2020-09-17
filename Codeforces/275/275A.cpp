#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int dirX[] = {0,0,-1,1};
int dirY[] = {1,-1,0,0};
int Table[6][6] = {1};
void toggle(int x, int y){
    Table[x][y] = !Table[x][y];

    for(int i = 0; i < 4; i++){
        Table[x+dirX[i]][y+dirY[i]] = !Table[x+dirX[i]][y+dirY[i]];
    }

}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int Operations[6][6] = {0};

    for(int i = 1; i<=3; i++){
        for(int j = 1; j <=3; j++){
            cin >> Operations[i][j];
        }
    }

    for(int i = 1; i<=3; i++){
        for(int j = 1; j <=3; j++){
            while(Operations[i][j]){
                toggle(i,j);
                Operations[i][j]--;
            }
        }
    }

    for(int i = 1; i<=3; i++){
        for(int j = 1; j <=3; j++){
            cout << !Table[i][j];
        }
        cout <<endl;
    }
    return 0;
}
