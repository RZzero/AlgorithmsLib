// #include <bits/stdc++.h>
#include </Users/rsuazo/bits/stdc++.h>

using namespace std;
using Long = long long;
int main(){
  int N;
  cin >> N;

  vector<int> A(N);

  for(auto &a: A) cin >> a;
  set<int> seto;
  int days = 0;
  vector<int> sizeForEachDay;

  int currentSum = 0;
  int numberOfEventsForCurrentDay = 0;
  int totalSumedEvents = 0;
  bool can = true;
  for (int i = 0; i < N; i++){
    currentSum += A[i];
    seto.insert(A[i]);
    numberOfEventsForCurrentDay++;
    if (A[i] < 0 && !seto.count(-A[i])) can = false;
    if (currentSum == 0 && seto.size() == numberOfEventsForCurrentDay) {
      totalSumedEvents += numberOfEventsForCurrentDay;
      sizeForEachDay.push_back(numberOfEventsForCurrentDay);
      days++;
      seto.clear();
      numberOfEventsForCurrentDay = 0;
    }
  }

  if (totalSumedEvents == N && can) {
    cout << days << endl;
    for(int i = 0; i < sizeForEachDay.size(); i++){
      cout << sizeForEachDay[i] << " ";
    }
    cout << endl;
  }else {
    cout << -1 << endl;
  }
  return 0;
}