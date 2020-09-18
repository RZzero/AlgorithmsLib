#include <bits/stdc++.h>
using namespace std;

double distance_between_two_coordinates(pair<double,double> A, pair<double,double> B) {
  double forX = (A.first-B.first);
  double forY = (A.second-B.second);
  return sqrt((forX * forX) + (forY * forY));
}

int main(){
  int N;
  cin >> N;

  vector<pair<double,double>> coordinates;

  for (int i = 0; i < N; i++){
    double x,y; cin >> x >> y;

    coordinates.push_back({x,y});
  }

  sort(coordinates.begin(), coordinates.end());

  double ways = 0;
  double total_sum = 0;
  do {
    for (int i = 1; i < coordinates.size(); i++) {
      total_sum+= distance_between_two_coordinates(coordinates[i-1], coordinates[i]);
    }

    ways+=1;
  } while(next_permutation(coordinates.begin(), coordinates.end()));

  cout.precision(17);
  double answer = total_sum / ways;
  cout <<  fixed << answer << endl;
  return 0;
}
