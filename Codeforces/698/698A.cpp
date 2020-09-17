#include<bits/stdc++.h>

using namespace std;
#define REST 0
#define CONTEST 1
#define GYM 2
#define BOTH 3

int N;
int Activities[104];
int MEMO[110][6];

int DP(int index, int last_activity){    
    if(index >= N) return 0;

    if(MEMO[index][last_activity] > -1) return MEMO[index][last_activity];
    // REST
    int anw = 1 + DP(index + 1, REST);

    // GROW THAT RATING
    if((Activities[index] == CONTEST || Activities[index] == BOTH) && last_activity != CONTEST) {
        anw = min(anw, DP(index + 1,CONTEST));
    }
    
    // GROW EM BICEPS
    if((Activities[index] == GYM || Activities[index] == BOTH) && last_activity != GYM) {
        anw = min(anw, DP(index + 1, GYM));
    }
    
    return MEMO[index][last_activity] = anw;
}
int main()
{   
    memset(MEMO, -1, sizeof(MEMO));
    cin >> N;
    for(int i = 0; i < N; i++) 
        cin >> Activities[i];

    cout << DP(0, 0) << endl;
    
    return 0;
}
