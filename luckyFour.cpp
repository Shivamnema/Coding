#include <iostream>
#include <vector>
#include <algorithm>
#define PB push_back
int fourcount (int);
using namespace std;

int main(void) {
    int T;
    vector<int> numbers;
    vector<int> counts;
    int num;
    cin >> T; // test cases;
    int count;
    while (T != 0)
    {   
        cin>>num ;
        numbers.PB(num);
        count = fourcount(num);
        counts.PB(count);
        
        
        T--;
    }

    for (int i = 0 ; i < numbers.size() ; i++){  
            cout<<counts[i]<<endl;
        }

    return 0;
}

int fourcount (int num) {
    int countfour = 0;
    int temp;
    while (num != 0){
        temp = num % 10;
        if (temp == 4) countfour++;
        num /= 10;
    }
    return countfour;
}