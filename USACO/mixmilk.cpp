#include <iostream>
#include <vector>
using namespace std;

void pourContentFromAtoB(int posA, int posB, vector<int> &capacity, vector<int> &milk)
{
  int quantityInto2ndContainer = capacity[posB] - milk[posB];
  quantityInto2ndContainer = milk[posA] <= quantityInto2ndContainer ? milk[posA] : quantityInto2ndContainer;
  milk[posA] -= quantityInto2ndContainer;
  milk[posB] += quantityInto2ndContainer;
}

int main()
{
  freopen("mixmilk.in", "r", stdin);
  freopen("mixmilk.out", "w", stdout);

  vector<int> capacity(3);
  vector<int> milk(3);

  for (int i = 0; i < 3; i++)
  {
    cin >> capacity[i] >> milk[i];
  }

  for (int i = 0; i < 100; i += 3)
  {
    pourContentFromAtoB(0, 1, capacity, milk);
    if (i + 2 >= 100)
      break;
    pourContentFromAtoB(1, 2, capacity, milk);

    pourContentFromAtoB(2, 0, capacity, milk);
  }
  for (auto &m : milk)
    cout << m << endl;

  return 0;
}
