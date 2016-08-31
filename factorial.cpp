#include <iostream>
using namespace std;
int factorial(int);
int main ( void) {
    int fact = 0;
    int num ;
    cin>>num;
    fact = factorial(num);
    
    cout<<"Factorial = "<<fact; 
    return 0;
}

int factorial(int number){
    int fact = number;
    number--;
    while (number != 1){
        fact = fact * (number);
        
        number--;
    }
    return fact;
}