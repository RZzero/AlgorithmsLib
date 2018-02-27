#include <bits/stdc++.h>

using namespace std; 

int main(){

    int N,mx,mn,cur;
    string sign, des;
    mx = 2*-1e9;
    mn = mx*-1;
    cout << "mn : " << mn << "mx : " << mx << endl;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> sign >> cur >> des;
        if(sign == ">="){
            if(des == "Y") mx = max(mx,cur);
            else mn = min(mn,cur-1);
        }else if(sign == ">"){
            if(des == "Y")mx = max(mx,cur+1);
            else mn = min(mn,cur);
        }else if(sign == "<="){
            if(des == "Y") mn = min(mn,cur);
            else mx = max(mx,cur+1);
        }else if(sign == "<"){
            if(des == "Y") mn = min(mn,cur-1);
            else mx = max(mx,cur);
        }

    }
    // cout << mn << " " << mx << endl;

    swap(mx,mn);
    if(mx < mn){
        cout << "Impossible" << endl;
    }else{
        cout << mn << endl;
    }
    return 0;
}