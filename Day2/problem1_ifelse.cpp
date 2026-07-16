// probelem marks 35 or greater then pass student else failed
#include<iostream>
using namespace std;
int main(){
    int marks;
    string Name;
    cout<<"Enter your Name ";
    cin>>Name;
    cout<<"Enter your marks ";
    cin>>marks;
    if (marks >= 35)
    {
        cout<<"Congratulation!!!\n" << Name<< " are Passed " ;
    }
    else{
        cout<< Name <<" are Failed due to Less Marks";
    }
    
}
