// nim game 1 -20,, 2 people playing game 1 single time 1 player chose atmost 3 number , ;;
#include<iostream>
using namespace std;
bool NimGame(int num){
    if (num%4!=0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int num;
    cout<<"Me Staring the game : ";
    cin>>num;
    cout<<NimGame(num);
    
}