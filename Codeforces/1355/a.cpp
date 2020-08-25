// https://codeforces.com/problemset/problem/1355/A

#include <iostream>

using namespace std;
typedef long long Long;

int get_min_digit(Long N) {
  int answer = 9;
  while (N > 0) {
    answer = min((Long)answer, N%10);
    N /= 10;
  }
  return answer;
}

int get_max_digit(Long N) {
  int answer = 0;
  while (N > 0) {
    answer = max((Long)answer, N%10);
    N /= 10;
  }
  return answer;
}

void brute_force(Long N, Long K) {
  Long current = N;

  for (Long i = 0; i < min(K-1, (Long)100); i++) {
    current = current + (get_min_digit(current) * get_max_digit(current));
  }
  cout << current << endl;
}

int main (){
  Long T, N, K;
  cin >> T;

  while (T--) {
    cin >> N >> K;
    brute_force(N, K);
  }

  return 0;
}
