#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ull;
vector<bool> is_Prime(300000);
vector<int> V(300000);
void SieveOfErathostenes(){
	for(ull i = 2; i <= 300000; i++){
		if(is_Prime[i]){
			for(ull j = i + i; j <= 300000; j+=i){
				is_Prime[j] = false;
			}
		}
	}
}

int main(){
  int N;
  cin >> N;
  
  for(auto &l : V) cin >> l;
  cout << 0 << endl;

  return 0;
}