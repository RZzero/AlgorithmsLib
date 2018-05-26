#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    int h,m;
    scanf("%d:%d",&h,&m);
    cout << h << " " << m << endl;
    bool stay = false;
    if(h == 7){
        if((m >= 0 && m < 45) || (m >= 50)) stay = true;
    }else if(h == 8){
        if((m >= 0 && m < 35) || (m >= 40)) stay = true;        
    }else if(h == 9){
        if((m >= 0 && m < 25) || (m >= 30)) stay = true; 
    }else if(h == 10){
        if((m >= 0 && m < 15) || (m >= 20)) stay = true; 
    }else if(h == 11){
        if((m >= 0 && m < 5) || (m >= 10 && m < 55)) stay = true;
    }else if(h == 1){
        if((m >= 0 && m < 45) || (m >= 50)) stay = true;
    }else if(h == 2){
        if((m >= 0 && m < 35) || (m >= 40)) stay = true; 
    }else if(h == 3){
        if((m >= 0 && m < 25) || (m >= 30)) stay = true; 
    }else if(h == 4){
        if((m >= 0 && m < 15) || (m >= 20)) stay = true; 
    }else if(h == 5){
        if((m >= 0 && m < 5) || (m >= 10 && m < 55)) stay = true;
    }
    if(stay) printf("Students, Surprise Quiz!\n");
    else printf("Students, you may go out.\n");

    return 0;
}
/*
Morning Timetable: 7:00-7:45, 7:50-8:35, 8:40-9:25, 9:30-10:15, 10:20-11:05, 11:10-11:55

Afternoon Timetable: 1:00-1:45, 1:50-2:35, 2:40-3:25, 3:30-4:15, 4:20-5:05, 5:10-5:55
*/