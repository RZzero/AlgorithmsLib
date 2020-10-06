// https://onlinejudge.org/external/109/10919.pdf
#include <bits/stdc++.h>

using namespace std;

int main () {
  int K;

  while (cin >> K) {
    if (!K) break;
    int M; cin >> M;
    set<string> courses_selected;
    
    bool can_graduate = true;
    for (int i = 0; i < K; i++) {
      string course; cin >> course;
      courses_selected.insert(course);
    }

    for (int i = 0; i < M; i++) {
      int courses, required;
      cin >> courses >> required;
      int courses_taken = 0;
      
      for (int j = 0; j < courses; j++) {
        string course; cin >> course;
        if (courses_selected.count(course))
          courses_taken++;
      }

      if (courses_taken < required)
        can_graduate = false;
    }

    cout << (can_graduate ? "yes" : "no") << endl;
  }
  return 0;
}
