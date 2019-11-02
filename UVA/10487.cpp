
#include <bits/stdc++.h>

using namespace std;

int main() {
  int currentCase = 1;
  while(true){
    int n, q;
    scanf("%d", &n);
    if (!n) break;
    vector<int> numbers(n);

    for(int &nn: numbers)
      scanf("%d", &nn);

    scanf("%d", &q);
    vector<int> queries(q);
    vector<int> sums;
    if (q) {
      for(int &qq: queries)
        scanf("%d", &qq);
      
      for(int i = 0; i < (int) numbers.size(); i++){
        for(int j = i+1; j < (int) numbers.size(); j++){
          sums.push_back(numbers[i] + numbers[j]);
        }
      }
      sort(sums.begin(), sums.end());
    }

    printf("Case %d:\n", currentCase);
    for(int &qq: queries){
      auto answer = lower_bound(sums.begin(), sums.end(), qq);
      if (answer == sums.end()) {
        answer--;
      }
      auto maybe = answer;
      maybe--;
      if (answer != sums.begin() && abs(qq - *maybe) < abs(qq - *answer)) {
        answer = maybe;
      }
      printf("Closest sum to %d is %d.\n", qq, *answer);
    }
    currentCase++;
  }
  return 0;
}