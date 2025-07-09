#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<set<int>> rows(N);
    vector<set<int>> cols(N);
    
    // Initialize answer grid
    vector<vector<int>> grid(N);
    for (int i = 0; i < N; i++) {
        grid[i] = vector<int>(N, -1);
    }

    for (int i = 0; i < N; i++) {
        rows[i].insert(i);
        cols[i].insert(i);
        grid[0][i] = i;
        grid[i][0] = i;
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] != -1) continue;
            int to_use = -1;
            for (int k = 0; to_use == -1; k++) {
                if (!rows[i].count(k) && !cols[j].count(k))
                    to_use = k;
            }
            grid[i][j] = to_use;
            rows[i].insert(to_use);
            cols[j].insert(to_use);
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
