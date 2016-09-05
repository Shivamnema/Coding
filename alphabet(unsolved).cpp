// C program to print all permutations with duplicates allowed
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;
 
/* Function to swap values at two pointers */
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
 
/* Function to print permutations of string
   This function takes three parameters:
   1. String
   2. Starting index of the string
   3. Ending index of the string. */
void permute(char *a, int l, int r, char *w)
{   cout << "\n1";
   int i;
   if (l == r)
        printf("Original = %s\t", a);
   else
   { cout<<"\n3";
       for (i = l; i <= r; i++)
       { cout<<"\n4";
            cout<<"\na = "<<a;
          swap((a+l), (a+i));
          cout<<endl<< "a1 = " << a;
          permute(a, l+1, r, w);
          cout<<"\n5";
          swap((a+l), (a+i)); //backtrack
          cout <<endl <<"a2 = "<<a;
       }    
   }
}

 
/* Driver program to test above functions */
int main()
{
    char str[26] , W[12];
    cin >> str;  
    int N = 0 ;
    cin>>N;
    while (N--){
        cin >> W;
        int n = strlen(str);
        permute(str, 0, n-1, W);
    }
    

    return 0;
}