#include <bits/stdc++.h>
using namespace std;

const int SIZE = 100004;
int tree[SIZE];
int MOD = 1e9 + 7;
int sum(int i) // Returns the sum from index 1 to i
{
  int sum = 0;
  while (i > 0) {
    sum += tree[i];
    i -= i & -i;
  }
  return sum;
}

void add(int i, int val) // Adds val to element with index i
{
  while (i < SIZE) {
    tree[i] += val % MOD;
    i += i & -i;
  }
}

int main (){
    
  return 0;
}