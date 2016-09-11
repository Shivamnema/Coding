#include <iostream>
#include <list>
#include <vector>
#include <algorithm>


#define pb push_back
//[---PROBLEM NAME-----]]problem codechef. Date : [dATE hERE]. 
//Shivamnema05
using namespace std;


int main(void) {
    int T;  
    cin>>T;
    while (T--){
        int N;
        cin >>N;
        int time[N];
        time[0] = 0;
        int input;
        for(int i = 1 ; i <= N; i++){
            cin>>time[i];
        }
        int ans = 0;
        for(int i=1; i<=N; i++){
            int b;
            cin>>b;
            if(b <= time[i] - time[i-1]){
                ans++;
            }
        }
        cout<<ans<<endl;


    }
    return 0;
}
