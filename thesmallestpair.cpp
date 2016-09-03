#include <iostream>
#include <list>
#include <algorithm>

#define PB push_back

//thesmallestpair problem codechef. Date : 30th AUG 2016. 
//Shivamnema05 //Solved.
using namespace std;

int main(void) {
    int T; //test cases
    
    cin>>T;

    int num;
    int num_count;
    int sum = 0;
    int brk = 0;
    list<int> lists;
    cin >> num_count;


    while (T--)
    {   lists.clear();
        for (int i =0 ; i <= num_count-1 ; i++){
            cin >> num;
            lists.PB(num);
        } 
        lists.sort(); 
        for (list<int>:: iterator i= lists.begin(); brk++ < 2 ; i++)
        {
            sum = sum + *i;
        }
         cout<< sum <<endl;
    }

    return 0;
}

