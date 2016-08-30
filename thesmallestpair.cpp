#include <iostream>
#include <list>
#include <algorithm>

#define PB push_back

//thesmallestpair problem codechef. Date : 30th AUG 2016. 
//Shivamnema05
using namespace std;

int main(void) {
    int T; //test cases
    list<int> lists;
    cin>>T;

    int num;
    int num_count;
    int sum = 0;
    int brk = 0;

    cin >> num_count;


    while (T != 0)
    {   lists.clear();
        for (int i =0 ; i <= num_count ; i++){
            cin >> num;
            lists.PB(num);
        } 
        lists.sort(); 
        for (list<int>:: iterator i= lists.begin(); brk++ < 2 ; i++)
        {
            sum = sum + *i;
        }
         cout<< sum <<endl;
       
    T--;
    }

    return 0;
}

