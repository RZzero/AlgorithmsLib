// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=17&page=show_problem&problem=1474
#include <iostream>
#include <vector>

using namespace std;
using Long = long long;

const Long MAX = 1e6 + 4;

vector<bool> is_Prime(MAX, true);
vector<int> digitPrimes;
vector<int> PS(MAX, 0);

void SieveOfErathostenes(){
  is_Prime[0] = false;
  is_Prime[1] = false;
	for(Long i = 2; i <= MAX; i++){
		if(is_Prime[i]){
			for(Long j = i + i; j <= MAX; j+=i){
				is_Prime[j] = false;
			}
		}
	}
}

Long sumOfDigits(Long N) {
  Long sum = 0;
  while (N > 0) {
    sum+= N%10;
    N /= 10;
  }
  return sum;
}

void calculateDigitPrimes() {
  for (int i = 2; i <= 1000000; i++) {
    if (is_Prime[i] && is_Prime[sumOfDigits(i)]) {
      digitPrimes.push_back(i);
    }
  }
}

// Prefix sums + (Two Pointers???)
void calculatePrefixSums() {
  for (int i = 0, j = 0; i < MAX; i++) {
    if (i == 0) PS[i] = 0;
    else if (i == digitPrimes[j]) {
      PS[i] = PS[i-1] + 1;
      j++;
    } else {
      PS[i] = PS[i-1];
    }
  }
}

int main () {
  // Problem can be solved using Prefix Sum and Binary Search
  SieveOfErathostenes();
  calculateDigitPrimes();
  calculatePrefixSums();

  int N;
  scanf("%d", &N);

  while (N--) {
    int L, R;
    scanf("%d%d", &L, &R);

    if (L < 2 && R < 2) {
      printf("%d\n", 0);
    } else if (PS[L] == PS[R] && PS[L] > PS[L-1]) {
      printf("%d\n", PS[L]- PS[L-1]);
    } else {
      if (is_Prime[L] && is_Prime[sumOfDigits(L)] && is_Prime[R] && is_Prime[sumOfDigits(R)]) {
        printf("%d\n", PS[R] - PS[L] + 1);
      } else {
        printf("%d\n", PS[R] - PS[L]);
      }
    }

  }

  return 0;
}
