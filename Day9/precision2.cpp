// Precision while operation --- double > float > int ;
#include<iostream>
using namespace std;
int main(){
    cout<< 6-12 / 9 * 3 + 4<<endl;//first * , then / , + and -;;
    //debuging --> precision always follow left to right;;
    //stp1: 6-12/9*3+4;  (12/9)=1
    //stp2: 6-1*3+4; (1*3)=3
    // stp3:6-3+4 ; (6-3)=3
    // stp3:3+4 ; =7///
    // ans =7;;
    
    
    //1. int (operator) int = int 
    cout<<"int 5 * int 6 = int "<<5 * 6<<endl;
    
    //2. float (operator) float = float 
    cout<<"float 13.3 * float 6.1 = float "<<13.3 * 6.1<<endl;
    
    //3.  double (operator) double = double 
    cout<<"double 13.31658 * double 6.5689 = double "<<13.31658 * 6.5689<<endl;

    // or else we follow for 
    cout<<endl<<"Conversion in other datatypes"<<endl;
    
    //1. flaot * int = float;
    cout<<"float 5.6 * int 6 = float "<<5.6 * 6<<endl;
    
    
    //2. int * double = double;
    cout<<" int 6 * double 5.61686 = float "<<6 * 5.61686<<endl;
    
    //3. float * double = double;
    cout<<"double 15.61686 * float 6.6 = double "<<15.61686 * 6.6<<endl;
}