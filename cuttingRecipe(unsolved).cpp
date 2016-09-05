#include <iostream>
#include <list>
#include <vector>
#include <algorithm>


#define pb push_back

//Cutting Recipe problem codechef. Date : Sep 1, 2016. 
//Shivamnema05
using namespace std;


int main(void) {
    int T; //test cases  
    cin>>T;
    

    while (T--){
        int N;
        cin>>N;
        int quant_of_ingredients[N];
        int gcdd = 0;

        for (int i = 0 ; i < N; i++){
            cin >> quant_of_ingredients[i];
        }
        int d = 0;
        for (int j = 0; j < N ; j++){
            d = quant_of_ingredients[i];
            while (d > 0){
                bool gcd = if (quant_of_ingredients[i] % d) || 
            }
        }
          
    }
    
  
    return 0;
}

