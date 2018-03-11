#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

struct segment{
    int x;
    int y;
    bool operator<(const segment& s )const{ 
        if(x == s.x) return y < s.y;
        else return x < s.x; 
    }
};

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int N,M;
    int vis[104] = {0};
    cin >> N >> M;
    vector<segment> segments;
    int x,y;

    for(int i = 0; i < N; i++){
        cin >> x >> y;

        segments.push_back(segment{x,y});
    }

    sort(segments.begin(),segments.end());
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            if(segments[i].x == segments[j].x &&segments[i].y == segments[j].y)continue;
            if(segments[j].x <= segments[i].y){

                for(int k = segments[i].x; k <= segments[j].y; k++){
                    vis[k] = true;
                }
            }
        }
    }
    // for(int i =0; i <=M; i++ )cout << vis[i] << endl;
    if(vis[M])cout << "YES" << endl;
    else cout << "NO" << endl;



    return 0;
}
