#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
void square(int N){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("*");
        }
        printf("\n");
    }
}

void rectangle(int H, int W){

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            printf("*");
        }
        printf("\n");
    }
}

void diamond(int N){
    
}
void triangle(int N){
        
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int T;
    scanf("%d",&T);
    for(int i = 0; i < T; i++){
        char x;
        scanf("%c",&x);
        
        if(x == 'S'){
            int N;
            scanf("%d",N);
            square(N);     
        }else if(x == 'R'){
            int H,W;
            scanf("%d%d",&H,&W);
            rectangle(H,W);
        }else if(x == 'D'){
            int N;
            scanf("%d",N);
            diamond(N);
        }else if(x == 'T'){
            int N;
            scanf("%d",&N);
            triangle(N);
        }
    }

    return 0;
}
