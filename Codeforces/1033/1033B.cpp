#include <bits/stdc++.h>
using namespace std;
using Long = long long;

bool isPrime(Long n){
  if(n < 2) return false;
  if(n == 2) return true;
  if(n%2 == 0) return false;
  Long sqrN = ceil(sqrt(n));
  for(Long i = 3; i <= sqrN; i+=2){
    if(n%i == 0) return false; 
  }
  return true;
} 
int main(){
  set<Long> primes;
  Long N;

  cin >> N;
  for(Long i = 0; i < N; i++){
    Long a,b;
    cin >> a >> b;
    // Long dif = pow(a,2)-pow(b,2);
    if(a-b == 1 && isPrime(a+b)){
      cout << "YES" << endl;
    }else cout << "NO" << endl;
  }
  return 0;
}