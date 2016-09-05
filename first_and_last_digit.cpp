#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#define pb push_back

//First and Last problem codechef. Date : Sep 5, 2016. 
//Shivamnema05

using namespace std;
//Greatest Comman Divisor
int split_number(int num);
int main(void) {
    int T;
    cin>>T;
    while(T--){
        int n;
        int sum; 
        cin>>n;
        sum = split_number(n);
        cout << sum<<endl;
    }

    return 0;
}

int split_number(int num){
    int first, last , temp = 0;
    if(num < 10){
        return num;
    }else {
        first = num % 10;
        //cout<< "First = "<<first;
        while (num != 0){
                temp = num % 10;    
                num /= 10;
                if (num <= 10) {
                    if(num > 0){
                        last = num % 10;
          //              cout<<"last = " << last;
                    }
                }                
            }
    }
    return (first + last);
}
