#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int arr[10002] = {0};
    vector<int> squares;
    
    for(int i = 0; i*i <= 10000; i++){
        squares.push_back(i*i);    
    }

    set<int> numbers;
    for(int i = 0; i < squares.size(); i++){
        for(int j = 0; j < squares.size(); j++){
            for(int k = 0; k < squares.size(); k++){
                if(squares[i] + squares[j] + squares[k] <= 10000){
                    numbers.insert(squares[i] + squares[j] + squares[k]);
                }
            }
        }
    }

    int N, sum = 0;
    cin >> N;

    for(int i = 0; i <= N; i++){
        if(!numbers.count(i)) sum++;
    }
    cout << sum << endl;


    return 0;
}
