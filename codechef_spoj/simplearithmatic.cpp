#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
#define FOR(i , a , n) for(int i=0; i<=n ; i++)

int main ( void ){
    int n;
    cin >> n;
    int T[10005];
    FOR (i, 0 , n){
        cin>>T[i];
    }
    FOR(i , 0 , n){
        cout<<T[i];
    }

    return 0;
}