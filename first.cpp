#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int I;
    list<int> inta = {1,3,4,5};

    inta.push_back(24);
    for (int i = 0; i < inta.size();  i++)
    {
        cout<<inta[i]<<" " ;
    }
    cout<<endl;
    
    for (int i = 0; i < inta.size();  i++)
    {
        cout<<inta[i]<<" ";
    }
    cout<<endl;

    
}