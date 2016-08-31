#include <iostream>
#include <list>
#include <algorithm>

int factorial (int);

//factorial problem codechef. Date : 31th AUG 2016. 
//Shivamnema05
using namespace std;

int main(void) {
    int T; //test cases
    
    cin>>T;
    int fact = 0;
    
    

    
    while (T--)
    {   int num , k=0;
   
        int carry = 0; 
        int arr[1000] = {1};
        cin >> num;

        for (int i = 1; i <= num ; i++){
            
            for(int j = 0; j <= k ; j++){
                arr[j]  = arr[j] * i + carry;
                carry = arr[j]/10;
                arr[j] = arr[j]%10;                
            }
            while (carry){
                k++;
                arr[k] = carry%10;
                carry/=10;
            }
        }
        for(int i=k ; i>= 0 ; i--){
            cout<<arr[i];
        }
        cout<<endl;
    }
    return 0;
}

