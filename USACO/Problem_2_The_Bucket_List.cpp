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

  int answer = 0;
  int available_amount = 0;
  while (cows.size()) {
    Event cur = cows.front();
  }

  cout << answer << endl;
  return 0;
}