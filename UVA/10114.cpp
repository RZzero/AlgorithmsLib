// https://onlinejudge.org/external/101/10114.pdf
#include <bits/stdc++.h>

using namespace std;

int main () {
  freopen("10114.in", "r", stdin);
  freopen("10114.out", "w", stdout);

  int duration, depreciation_records;
  double downpayment, loan;

  while (cin >> duration >> downpayment >> loan >> depreciation_records) {
    if (duration < 0) break;
    vector<pair<int,double>> records;
    vector<double> interests(104);
    for (int i = 0; i < depreciation_records; i++) {
      int start_month; double interest;
      cin >> start_month >> interest;

      records.push_back({ start_month, interest });
      for (int j = start_month; j <= 100; j++) {
        interests[j] = interest;
      }
    }
    
    int current_month = 0;
    double monthly_payment = loan / (duration*1.0);
    double car_value = (loan + downpayment) - ((loan + downpayment) * interests[current_month]);
    double current_loan_value = loan;

    while (car_value < current_loan_value) {
      current_month++;
      car_value = car_value - (car_value * interests[current_month]);
      current_loan_value -= monthly_payment;
    }

    cout << current_month << " month";
    cout << (current_month != 1 ? "s" : "") << endl;
  }
  return 0;
}
