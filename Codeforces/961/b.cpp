#include <iostream>
#include <vector>

using namespace std;

int main () {
  int N, K;
  cin >> N >> K;

  vector<int> classes(N);
  vector<int> awake(N);
  vector<int> PS(N+1, 0);
  vector<int> SSA(N, 0);

  for (auto &c: classes)
    cin >> c;

  for (auto &a: awake)
    cin >> a;

  for (int i = 0; i < classes.size(); i++) {
    PS[i+1] = PS[i] + classes[i];
  }

  int lastClassesElement = classes.size() - 1;
  for (int i = lastClassesElement; i >= 0; i--) {
    if (i == lastClassesElement) {
      if (awake[lastClassesElement]) SSA[lastClassesElement] = classes[lastClassesElement];
    }
    else SSA[i] = SSA[i+1] + (awake[i] ? classes[i] : 0);
  }

  if (K == N) {
    cout << SSA[0] << endl;
    return 0;
  }
  int sum_while_awake = 0;
  int answer = 0;
  for (int i = 0; i < N-K; i++) {
    cout << "El i: " << i << endl;
    if (awake[i]) sum_while_awake += classes[i];
    int SSAValue = ((i + K + 1) >= N) ? 0 : SSA[i + K + 1];

    answer = max(answer, sum_while_awake + PS[i+K+1] - PS[i+1] + SSAValue);
  }

  cout << answer << endl;
  return 0;
}