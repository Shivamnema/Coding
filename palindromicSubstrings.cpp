#include <iostream>
#include <list>
#include <vector>
#include <algorithm>


#define pb push_back
//[Palindromic Substrings]]problem codechef. Date : [8th Sep 2016]. 
//Shivamnema05
/*Chef is eager to know whether it is possible to choose some non empty
 strings s1 and s2 where s1 is a substring of A,
 s2 is a substring of B such that s1 + s2 is a palindromic string. 
 Here '+' denotes the concatenation between the strings.*/
using namespace std;
bool palindrom (string string1 , string string2){
    int flag = 0;
    int length1 = string1.size();
    int length2 = string2.size();

    for(int i=length1;i >= 0 ;i--){
        for(int j=0 ; j < length2 ; j++){
            if(string1[i] == string2[j]){
                flag =1;
            }
        }
	}
    if (flag) {
    //string iss not a palindrome 
    return true;
    }    
    else {
        //string is a palindrome
        return false;
    }
}
int main(void) {
    int T; 
    cin>>T;
    while (T--){
        string a,b;
        cin >> a;
        cin >> b;   
        if (palindrom(a,b)){
            cout<<"Yes"<<endl;
        }else {
            cout<<"No"<<endl;
        }
    }
    
    return 0;
}
