// #include <bits/stdc++.h>
#include <bits/stdc++.h>

using namespace std;

string colors = "ROYGBIV";
string others = "YGBIV";

int main(){
  int N;
  cin >> N;
  if (N == 7)
    cout << colors << endl;
  else {
    string secondPart = "RO";
    for (int i = 2; i < N; i++) {
      secondPart+= others[i%others.size()];
    }
    cout << secondPart << endl;
  }
  return 0;
}