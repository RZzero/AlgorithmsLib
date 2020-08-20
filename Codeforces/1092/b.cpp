// https://codeforces.com/contest/1092/problem/B
#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>
#include <iomanip>
using namespace std;
using Long = long long;

int main(){
  int T;
  cin >> T;

  vector<int> numbers(T);
  for (auto &n: numbers) cin >> n;

  sort(numbers.begin(), numbers.end());

  int answer = 0;

  for (int i = 1; i < numbers.size(); i+= 2) {
    if (numbers[i] != numbers[i-1]) answer += numbers[i] - numbers[i-1];
  }
  cout << answer << endl;
  return 0;
}
