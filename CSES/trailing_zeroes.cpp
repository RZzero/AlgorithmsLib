#include <bits/stdc++.h>

using namespace std;
using Long = long long;

Long print_factorial(Long n) {
    if (n == 1) return 1;
    return n * print_factorial(n-1);
}

int main() {
    Long N; cin >> N;
    Long answer = 0;

    while(N > 0) {
        answer+=N/5;
        N/=5;
    } 
    cout << answer << endl;
    return 0;

}
