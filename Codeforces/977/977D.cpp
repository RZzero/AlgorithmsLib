#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<ull> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ull N;
    cin >> N;
    set<ull> numbers;
    for(ull i = 0; i < N; i++){
        ull dum; cin >> dum;
        numbers.insert(dum);
    }

    ull the_one;
    map<ull,ull> divided_by_two;
    map<ull,ull> mult_by_three;

    for(auto &it: numbers){
        divided_by_two[it] = it%2 == 0 ? it / 2 : 0;
    }

    for(auto &it: numbers){
        mult_by_three[it] = it * 3;
    }

    ull first_element;
    for(auto &it: numbers){
        // cout << it  << " Divided by two : " << divided_by_two[it] << " mult by 3 : " << mult_by_three[it];
        if(numbers.count(divided_by_two[it]) == 0 && numbers.count(mult_by_three[it]) == 0){
            first_element = it;
            break;
        }
    }

    // cout << first_element << endl;
    vector<ull> answer;
    answer.push_back(first_element);
    ull current_element = first_element;
    for(ull i = 0; i < N - 1; i++){
        if(numbers.count(current_element / 3)){
            answer.push_back(current_element / 3);
            current_element = current_element / 3;
        }else{
            answer.push_back(current_element * 2);
            current_element = current_element * 2;
        }
    }
    for(ull i = 0; i < answer.size(); i++){
        cout << answer[i] << " ";
    }
    return 0;
}

/*
6
4 8 6 3 12 9

ANSWER
9 3 6 12 4 8 
*/