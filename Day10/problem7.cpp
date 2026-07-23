// break;--> terminate the loop while iteration is going on;
//  in while loop
#include<iostream>
using namespace std;
int main(){
    int i=1;
    while (i<=10)
    {
        if (i==5)
        {
            break;// terminate the program/loop when i ==5 ; and it come out of the loop
        }
        cout<<i<<" ";
        i++;
        
    }
    
}