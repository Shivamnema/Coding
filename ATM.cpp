#include <iostream>
#include <stdio.h>

using namespace std;

int main (void) 
{
    int withdraw;
    float balance;
    float new_bal;
    cin >> withdraw >> balance;
  

    // - 0.5 as per bank charge
    
    if(withdraw % 5 !=0 || balance-0.5 <= withdraw){
        printf("%.2lf", balance);
    }
    else {
        new_bal = balance - withdraw - 0.50;
        printf("%.2lf", new_bal);
        
       
    } 
    
    //double total=100;
   //printf("%.2lf",total);
    return 0;

}