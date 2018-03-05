#include <bits/stdc++.h>

using namespace std; 
const int n = 1e6;
bool prime[n+1];
vector<int> Primes;
void SieveOfEratosthenes()
{
	// Create a boolean array "prime[0..n]" and initialize
	// all entries it as true. A value in prime[i] will
	// finally be false if i is Not a prime, else true.

	memset(prime, true, sizeof(prime));

	for (int p=2; p*p<=n; p++)
	{
		// If prime[p] is not changed, then it is a prime
		if (prime[p] == true)
		{
			// Update all multiples of p
			for (int i=p*2; i<=n; i += p)
				prime[i] = false;
		}
	}
    for (int p=2; p<=n; p++){
	    if (prime[p]) Primes.push_back(p);
	}
    int cnt = 0;
	// Print all prime numbers
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    SieveOfEratosthenes();

    int T,target;
    vector<bool> cases;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> target;

    }
    return 0;
}
