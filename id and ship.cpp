    #include <iostream>
    #include <list>
    #include <vector>
    #include <algorithm>


    #define pb push_back
    //[Id and Ship]]problem codechef. Date : [Sep 7, 2016]. 
    //Shivamnema05
    using namespace std;


    int main(void) {
        int T;
        cin>>T;
        while (T--){
            char id;
        
            cin >> id;
            
            if(id == 'b' || id == 'B'){
                cout<<"BattleShip";
            }else if (id == 'c' || id == 'C'){
                cout<<"Cruiser";
            }else if (id == 'd' || id == 'D'){
                cout<<"Destroyer";
            }else {
                cout<<"Frigate";
            }
            cout<<endl;
        }
        return 0;
    }
