#include <bits/stdc++.h>
using namespace std;

struct Event {
  int start, end, required;
};

int main() {
  int N;
  cin >> N;

  vector<Event> cows;
  for (int i = 0; i < N; i++) {
    int s, e, r;
    cin >> s >> e >> r;
    cows.push_back(Event({s, e, r}));
  }

  sort(cows.begin(), cows.end(), [&](Event &lhsEvent, Event &rhsEvent) {
    if (lhsEvent.start != rhsEvent.start) {
      return lhsEvent.start < rhsEvent.start;
    }
    return (lhsEvent.end < rhsEvent.end);
  });

  for (auto &cow : cows)
    cout << cow.start << " " << cow.end << " " << cow.required << endl;
  return 0;
}