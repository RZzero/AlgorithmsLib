#include <bits/stdc++.h>
using namespace std;

int get_max_of_last_two(vector<int> numbers) {
  int size_of_numbers = numbers.size();
  int answer = 0;
  if (size_of_numbers <= 1)
    return -1;
  answer += numbers.back();
  numbers.pop_back();
  answer += numbers.back();
  return answer;
}

int main() {
  int N;
  vector<int> odd;
  vector<int> even;
  multiset<int> seto;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;
    if (n % 2 == 0) {
      even.push_back(n);
    } else {
      odd.push_back(n);
    }
  }

  sort(odd.begin(), odd.end());
  sort(even.begin(), even.end());

  cout << max(get_max_of_last_two(odd), get_max_of_last_two(even)) << endl;
  return 0;
}