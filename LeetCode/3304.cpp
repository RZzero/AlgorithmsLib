#include <bits/stdc++.h>
using namespace std;

char kthCharacter(int k) {
        // abbc bccd bccdcdde
        string current = "a";
        while (current.size() <= k) {
            int initial_size_for_round = current.size();
            for (int i = 0; i < initial_size_for_round; i++) {
                current += current[i] == 'z' ? 'a' : current[i] + 1;
            }
            
        }
        cout << current << endl;
        return current[k-1];
}

int main() {
    return 0;
}
