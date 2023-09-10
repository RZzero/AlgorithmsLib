// https://codeforces.com/contest/1869/problem/B
#include <bits/stdc++.h>

using namespace std;
using Long = long long;
Long INF = LLONG_MAX / 2;

struct Point {
  Long x, y;
};

Long distance (Point a, Point b) {
  return abs(a.x - b.x) + abs(a.y - b.y);
}

int main () {
  int T;
  cin >> T;

  while (T--) {
    vector<Point> points;
    Long n, k, a, b;
    cin >> n >> k >> a >> b;
    a--; b--;

    for (int i = 0; i < n; i++) {
      Long x,y;
      cin >> x >> y;
      points.push_back(Point({ x, y }));
    }

    Long distance_a_to_b = (a < k && b < k) ? 0 : distance(points[a], points[b]);
    Long distance_a_to_major_city = INF;
    Long distance_b_to_major_city = INF;

    for (int i = 0; i < k; i++) {
      if (i == a || i == b) continue;
      Long a_to_city_i = (a < k && i < k) ? 0 : distance(points[a], points[i]);
      Long b_to_city_i = (b < k && i < k) ? 0 : distance(points[b], points[i]);
      distance_a_to_major_city = min(distance_a_to_major_city, a_to_city_i);
      distance_b_to_major_city = min(distance_b_to_major_city, b_to_city_i);
    }

    cout << min(distance_a_to_b, (distance_a_to_major_city + distance_b_to_major_city)) << endl;
  }
  return 0;
}

/*
1
6 2 3 5
0 0
1 -2
-2 1
-1 3
2 -2
-3 -3
*/