#include <bits/stdc++.h>

using namespace std; 

int main(){

    int N,dummy;
    int S = 0;
    scanf("%i", &N);
    for(int i = 0; i < N; i++){
        scanf("%i",&dummy);
        S+= dummy;
    }

    double solution = (1.0 * S/(100 * N)) * 100;
    // cout << S << endl;
    printf("%.12lf\n", solution);
    return 0;
}
