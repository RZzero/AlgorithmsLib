#include<bits/stdc++.h>
using namespace std;
using Long = long long;
const int SIZE = 10000004;
int TREE[SIZE];
int sum(int i) // Returns the sum from index 1 to i
{
    int sum = 0;
    while (i > 0) {
        sum += TREE[i];
        i -= i & -i;
    }
    return sum;
}
void add(int i, int val) // Adds val to element with index i
{
    while (i < SIZE) {
        TREE[i] += val;
        i += i & -i;
    }
}

int main(){
  int N, T,x,L,R;
  scanf("%d", &N);
  for(int i = 0; i < N; i++){
    scanf("%d", &T);
    if(T == 1){
      scanf("%d", &x);
      add(x, 1);
    }else if(T == 2){
      scanf("%d%d",&L,&R);
      if(L == 1) printf("%d\n", sum(R));
      else printf("%d\n", sum(R) - sum(L - 1));
    }
  }
  return 0;
}