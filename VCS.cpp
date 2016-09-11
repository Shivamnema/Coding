#include <iostream>
#include <list>
#include <vector>
#include <algorithm>


#define pb push_back
//[Version Control System]problem codechef. Date : [11 Sep 2016, 10:31AM]. 
//Shivamnema05
using namespace std;

int N; //no of source files
int M ; //no of ignored files
int K; //no of tracked files
int main(void) {
    int T, i;  
    cin >>T;
    while(T--){
        int scrfile[100] = {0};
        cin >>N >>M >>K;
        int tracked, untracked,val;
        
        for (i=0 ; i<M ; i++ ){
            cin >> val;   
            scrfile[val]++;
        }
                
        for (i =0 ; i<K ; i++ ){
            cin >> val;
            scrfile[val]++;
        }
        for (i=1 ; i<=N ; i++){
            if(scrfile[i] == 2){
                tracked++;
            }else if(scrfile[i] == 0) {
                untracked++;
            }
        }
        cout<<tracked<<" "<<untracked<<endl;
        
    }
    return 0;
}
