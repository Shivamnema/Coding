#include <iostream>
#include <vector>
#include <algorithm>

#define pb push_back
#define fast std::ios::sync_with_stdio(false);
//[Gregorian Calendar]]problem codechef. Date : [Sep 9 , 2016]. 
//Shivamnema05
using namespace std;

int daycalculation (int year){
    int countleap=0;
    int oddDayleap;
    int oddDayordinary,totalodddays; 
    if(year < 2001){
        for(int i=1900 ; i < year ; i++){
            if (((i%4==0) && (i%100!=0)) || (i%400==0)){
                 countleap++;
            }
        }
            oddDayordinary = (year - 1900)- countleap; 
            oddDayleap = countleap * 2;
            totalodddays = (oddDayordinary + oddDayleap + 1 )%7; 
            return (totalodddays);
        
    }else {
        for(int i = 2001; i < year ; i++){
            if (((i%4==0) && (i%100!=0)) || (i%400==0)){
                 countleap++;
            }
        }
        oddDayordinary = (year - 2000) - countleap;
        oddDayleap = countleap * 2;
        totalodddays = (oddDayordinary + oddDayleap)%7; 
        return (totalodddays);
        
    }
}

void odddays(int x) {
    switch(x){
        case 0 : cout <<"sunday"<<endl; break;
        case 1 : cout << "monday"<<endl; break;
        case 2 : cout <<"tuesday" <<endl; break;
        case 3 : cout <<"wednesday"<<endl; break;
        case 4 : cout <<"thursday"<<endl; break;
        case 5 : cout <<"friday" <<endl; break;
        case 6 : cout <<"saturday" <<endl; break;         
    }
}
int main(void) {
    fast
    int T;  
    cin >>T;
    while(T--){
        int y;
        cin >>y; 
        odddays(daycalculation(y));          
    }
    return 0;
}
