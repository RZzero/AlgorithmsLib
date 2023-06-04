// https://codeforces.com/contest/1831/problem/B
#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> compute_max_sub_array(int &N, vector<int> &arr) {
  vector<int> map_a(2 * N + 1, 0);

  int current_sub_array_length = 1;
  for (int i = 1; i < arr.size(); i++) {
    if (arr[i-1] == arr[i]) current_sub_array_length++;
    else {
      map_a[arr[i-1]] = max(map_a[arr[i-1]], current_sub_array_length);
      current_sub_array_length = 1;
    }
  }

  return map_a;
}


int main () {
  int T;
  cin >> T;
  while (T--) {
    int N; cin >> N;

    vector<int> A(N+1, 0);
    vector<int> B(N+1, 0);
    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
      cin >> B[i];
    }

    vector<int> map_a = compute_max_sub_array(N, A);
    vector<int> map_b = compute_max_sub_array(N, B);

    
    int answer = 0;
    for (int i = 1; i <= 2 * N; i++) {
      answer = max(answer, map_a[i] + map_b[i]);
    }

    cout << answer << '\n';
  }

  return 0;
}