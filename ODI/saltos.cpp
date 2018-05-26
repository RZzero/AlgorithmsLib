#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N, x1,x2;
    cin >> N >> x1 >> x2;
    int arr[11] = {0};
    vector<int> she,he;
    
    for(int i = x1; i <= N; i+=x1){
        arr[i]++;
    }
    
    for(int i = N; i > 0; i-=x2){
        arr[i]++;
    }
    bool can = false;

    for(int i = 1; i <= N; i++){
        if(arr[i] > 1) {
            can = true;
        }
    }


    if(!can){
        cout << 0 << endl;
        cout << "IMPOSIBLE" << endl;
    }else{
        int xx1 = x1;
        int xx2 = N;
        int last_pos = -1;
        while(xx1 <=N && xx2 > 0){
           if(xx1 == xx2) last_pos = xx1;
           
        }
        cout << endl;
    }
    
    return 0;
}
