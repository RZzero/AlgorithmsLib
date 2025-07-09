#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    map<char,int> mapa;
    for (auto &c: S) mapa[c]++;
    int N = S.size();
    string answer = "";
    
    for (auto &c: mapa) {
        if (c.second > (S.size() + 1)/2) {
            cout << -1 << endl;
            return 0;
        }
    }
    
    while (answer.size() != N) {
        int available_spaces = N-answer.size();
        char to_use = '#';
        char forced_to_use = '#';
        for (char cur = 'A'; cur <= 'Z'; cur++) {
            if (!mapa.count(cur)) continue;
            int required_for_cur = (mapa[cur] * 2) - 1;
            if (required_for_cur == available_spaces)
                forced_to_use = cur;
            
            if (to_use == '#' &&
                (answer.size() == 0 ||
                (answer.size() > 0 && answer.back() != cur)))
                to_use = cur;
        }

        char used = (forced_to_use != '#') ? forced_to_use : to_use;
        mapa[used]--;
        if (!mapa[used]) mapa.erase(used);
        answer += used;
    }
    cout << answer << endl;
    return 0;
}
