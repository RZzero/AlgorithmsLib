#include <bits/stdc++.h>

using namespace std;
typedef long long Long;

struct Point {
  double x;
  double y;
  char tag;
};

bool comparator(pair<int,Point> &x, pair<int,Point> &y) {
  return x.first < y.first;
}

Long distance_between_to_origin(Point A) {
  return sqrt((A.x * 1LL * A.x) + (A.y * 1LL * A.y));
}

// TODO: Change to long longs

int main() {
  string S = "CCD";
  vector<Long> X = { 1, -1, 2 };
  vector<Long> Y = { 1, -1, -2};

  int len_of_s = S.size();
  vector<Point> points(len_of_s);

  for (int i = 0; i < len_of_s; i++) {
    points[i].x = X[i];
    points[i].y = Y[i];
    points[i].tag = S[i];
  }

  vector<pair<int,Point>> distances;
  for (auto &p : points) {
    distances.push_back({ distance_between_to_origin(p), p});
  }

  sort(distances.begin(), distances.end(), comparator);

  map<char, pair<int,Long>> circle_tags;
  // How_many, distance
  bool can = true;
  int answer = 0;

  if (len_of_s == 1) return 1;
  else {
    for (int i = 0; i < distances.size(); i++) {
      if (circle_tags.count(distances[i].second.tag)) {
        if (distances[i].first == circle_tags[distances[i].second.tag].second) {
          circle_tags[distances[i].second.tag] = {0, 0};
        }
        break;
      } else {
        circle_tags[distances[i].second.tag] = {1 , distances[i].first };
      }
    }
  }

  for (auto &element: circle_tags) {
    if (element.second.first)
      answer++;
  }

  cout << answer << endl;
  return 0;
}
