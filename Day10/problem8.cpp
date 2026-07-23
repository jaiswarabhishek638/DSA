//continue  --> it skips/jumps the condition, not breaking the loop / iteration

#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=1;i<=10;i++){
        if (i%4==0) 
        {
            continue;// skip/jump the no which is divided by 4 
        }
        cout<<i<<" ";

        
    }
    
}