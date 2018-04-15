#include <bits/stdc++.h>

using namespace std; 
typedef unsigned long long ull;
set<ull> T_Primes;

bool is_Prime[2000000];

void SieveOfErathostenes(){
	for(ull i = 2; i <= 2000000; i++){

		if(is_Prime[i]){
			T_Primes.insert(1LL * i * i);
			
			for(ull j = i + i; j <= 2000000; j+=i){
				is_Prime[j] = false;
			}
		}
	}

}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

	memset(is_Prime,true,sizeof(is_Prime));
	SieveOfErathostenes();

	ull N, T;
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> T;
		cout << (T_Primes.count(T) ? "YES" : "NO") << endl;	
	}
	
    return 0;
}
