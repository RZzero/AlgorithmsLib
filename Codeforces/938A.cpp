#include <bits/stdc++.h>

using namespace std; 

bool isVowel(char x){
    if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y')
        return true;

    return false;
}
int main(){

    int n;
    string s;
    string anw = "";
    cin >> n >> s;

    int j = 1;
    anw+=s[0];
    for(int i = 1; i < n;){
        if(isVowel(anw[anw.size()-1]) && isVowel(s[i])){
            i++;
        }else{
            anw+=s[i];
            i++;
        }
    }
    cout << anw << endl;
    return 0;
}
