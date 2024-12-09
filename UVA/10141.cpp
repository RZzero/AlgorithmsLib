#include <bits/stdc++.h>
using namespace std;

int main() {
  int R, P;
  int current_proposal = 1;
  while (cin >> R >> P) {
    if (!R || !P)
      break;
    if (current_proposal > 1 && R)
      cout << endl;
    set<string> requirements;
    cin.ignore();
    for (int i = 0; i < R; i++) {
      string req;
      getline(cin, req);
      // cerr << req << endl;
      requirements.insert(req);
    }

    string winning_proposal = "";
    double best_price = 1e9;
    double best_compliance = 0;

    for (int i = 0; i < P; i++) {
      string proposing_name;
      getline(cin, proposing_name);
      double price;
      int req_met;
      cin >> price >> req_met;
      vector<string> requirements_from(req_met);
      // cerr << proposing_name << " " << price << " " << req_met << endl;

      cin.ignore();
      for (auto &s : requirements_from) {
        getline(cin, s);
        // cerr << s << endl;
      }

      double compliance = req_met * 1.0 / R * 1.0;
      if (compliance > best_compliance) {
        best_price = price;
        winning_proposal = proposing_name;
        best_compliance = compliance;
      } else if (compliance == best_compliance && price < best_price) {
        best_price = price;
        winning_proposal = proposing_name;
      }
    }

    cout << "RFP #" << current_proposal << endl;
    cout << winning_proposal << endl;
    current_proposal++;
  }

  return 0;
}