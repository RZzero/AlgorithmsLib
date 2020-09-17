#include <bits/stdc++.h>

using namespace std; 

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N, L, dummy;
    cin >> N >> L;

    vector<int> lights;

    for(int i =0; i < N; i++){
        cin >> dummy;
        lights.push_back(dummy);
    }

    sort(lights.begin(), lights.end());

    double max_distance = -1e9;

    for(int i =1; i < N; i++){
        max_distance = max(max_distance, 1.0*(lights[i]-lights[i-1])/2);
    }
    
    //If there are no lights in the at 0 or N
    double p_max = max(lights[0]-0 ,L-lights[N-1]);


    printf("%.10lf\n",max(p_max, max_distance));
    return 0;
}
