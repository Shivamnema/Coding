#include <iostream>
#include <cmath>

using namespace std;
void armstrong (int number);
int num_of_digit (int number);
int main(void)
{
    int number;
    cin >> number;
    armstrong(number);

    return 0;
}

void armstrong (int number)
{
    int power = num_of_digit(number);
    int digit;
    int sum = 0;

    for (int i =0; i < power ; i++)
    {
        digit %=10;
        number/=10;
        sum =  pow (digit , power);
    }
    if ( sum == number) cout << "armstrong number" ;
    else cout<< "Not armstrong number";
}
int num_of_digit(int number)
{
    int num_of_digit = 0;
    while (number >=0 ){
        num_of_digit++;
        number/=10;
    }
    return num_of_digit;
}
