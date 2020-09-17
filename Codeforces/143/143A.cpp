#include <bits/stdc++.h>

using namespace std; 

int main(){

    int r1,r2,c1,c2,d1,d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    for(int i = 1; i <=9; i++){
        for(int j = 1; j <=9; j++){
            for(int k = 1; k <= 9; k++){
                for(int l = 1; l <=9; l++){
                    set<int> seto;
                    seto.insert(i);
                    seto.insert(j);
                    seto.insert(k);
                    seto.insert(l);
                if(i+j == r1 && i+k == c1 && k+l == r2 && j+l == c2 
                && i+l == d1 && j+k == d2 && i && seto.size() == 4){
                    cout << i << " " << j << endl;
                    cout << k << " " << l << endl;
                    return 0; 
                }

                }
            }
        }
    }
    cout << -1 << endl;
    return 0;
}
