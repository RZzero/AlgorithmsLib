#include <bits/stdc++.h>

using namespace std;

struct Letter {
  int qtty;
  char id;
  bool operator<(const Letter& rhs) const
  {
    return qtty < rhs.qtty;
  }
};

bool is_valid(string S) {
  for (int i = 1; i < S.size(); i++) {
    if (S[i-1] == S[i])
      return false;
  }
  return true;
}

int main() {
  string S = "vvvlo";
  map<char,int> frq;
  priority_queue<Letter> pq;

  for (auto &c: S) {
    frq[c]++;
  }

  for (auto &element: frq) {
    pq.push(Letter({ element.second, element.first }));
  }
  
  string answer = "";

  while (pq.size()) {
    Letter top = pq.top();
    pq.pop();
    if (answer.size() && pq.size() && answer.back() == top.id) {
      Letter next_top = pq.top();
      pq.pop();
      pq.push(top);
      answer += next_top.id;
      next_top.qtty = next_top.qtty - 1;
      if (next_top.qtty) {
        pq.push(next_top);
      }
    } else {
      answer += top.id;
      top.qtty = top.qtty - 1;
      if (top.qtty) {
        pq.push(top);
      }
    }



  }

  if (is_valid(answer)) cout << answer << endl;
  else cout << "" << endl;
  return 0;
}
