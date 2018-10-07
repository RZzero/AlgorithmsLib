#include <bits/stdc++.h>
using namespace std;

int getTicket(string s){
  if(s == "rat") return 0;
  if(s == "woman" || s == "child") return 1;
  if(s == "man") return 2;
  else return 3;
}

bool operator<(const Event &e) const{
    if(x != e.x) return x < e.x;
    return type < e.type;
}

int main(){
  vector< pair<int,string> > crew;
  int N;
  cin >> N;
  for(int i = 0; i < N; i++){
    string a,b;
    cin >> a >> b;
    crew.push_back(make_pair(getTicket(b), a ));
  }

  sort(crew.begin(),crew.end(), comp);
  for(auto member: crew){
    cout << member.second << endl;
  }
  return 0;
}