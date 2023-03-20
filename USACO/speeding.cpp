#include <iostream>
#include <vector>
using namespace std;

int main()
{
  freopen("speeding.in", "r", stdin);
  freopen("speeding.out", "w", stdout);
  int N, M;
  cin >> N >> M;

  vector<int> road(104, 0); // Contains speed limit for each segment
  int last_filled = 0;

  for (int i = 0; i < N; i++)
  {
    int length, speed_limit;
    cin >> length >> speed_limit;

    int fill_until = last_filled + length;
    for (int j = last_filled + 1; j <= fill_until; j++)
    {
      road[j] = speed_limit;
    }
    last_filled = fill_until;
  }

  int answer = 0;
  last_filled = 0;
  for (int i = 0; i < M; i++)
  {
    int length, bessies_speed;
    cin >> length >> bessies_speed;

    int fill_until = last_filled + length;
    for (int j = last_filled + 1; j <= fill_until; j++)
    {
      if (bessies_speed > road[j])
      {
        answer = max(answer, bessies_speed - road[j]);
      }
    }
    last_filled = fill_until;
  }

  cout << answer << endl;
  return 0;
}