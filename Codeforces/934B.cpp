#include <bits/stdc++.h>

using namespace std; 

int main(){

    int k;
    map<int,char> mmap;

    mmap[2] = '8';
    mmap[1] = '4';

    cin >> k;
    if(k > 38){
        cout << -1 << endl;
    }else if(k == 1){
        cout << mmap[1] << endl;
    }else if(k%2 == 0){
        for(int i = 0; i < k/2; i++){
            cout << mmap[2];
        }
        cout <<"" <<endl;
    }else{
        for(int i = 0; i <(k-1)/2; i++ ){
            cout << mmap[2];
        }
        cout << mmap[1] << endl;
    }
    return 0;
}
