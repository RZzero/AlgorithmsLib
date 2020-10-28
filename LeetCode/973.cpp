#include <bits/stdc++.h>

using namespace std;

struct Point {
  int x,y;
  double distance;
};

double getDistanceToOrigin(int x, int y) {
  double x_distance = x * x;
  double y_distance = y * y;

  return (double)sqrt(x_distance + y_distance);
}

bool comparator (Point &A, Point &B) {
  return A.distance < B.distance;
}

int main() {
  int K = 2;
  vector<vector<int>> points = { {3,3}, {5,-1}, {-2,4} };
  vector<vector<int>> answer;

  vector<Point> my_points;
  for (auto &point: points) {
    int x = point[0];
    int y = point[1];
    my_points.push_back({ x, y, getDistanceToOrigin(x, y)});
  }

  sort(my_points.begin(), my_points.end(), comparator);

  for(int i = 0; i < K; i++) {
    answer.push_back({my_points[i].x, my_points[i].y});
  }

  for (auto &point: answer) {
    cout << point[0] << " " << point[1] << endl;
  }
  return 0;
}