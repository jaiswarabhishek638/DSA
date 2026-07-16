// problem : a,e,i,o,u print vowels else consonent;

#include<iostream>
using namespace std;
int main()
{
    char Character ;
    cout<<"Enter the Characters: ";
    cin>>Character;
    if (Character =='a')
        cout<<Character<<" is a VOWELS";
    else if(Character =='e')
        cout<<Character<< " is a VOWELS";
    else if(Character =='i')
        cout<<Character<< " is a VOWELS";
    else if(Character =='o')
        cout<<Character<< " is a VOWELS";
    else if(Character =='u')
        cout<<Character<< " is a VOWELS";
    else
    cout << Character<<" is a CONSONENTS";

}