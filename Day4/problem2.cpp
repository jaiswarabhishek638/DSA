// problem : a - z all character ko print karna hai;
#include<iostream>
using namespace std;
int main(){
    //method 1
    char Chrtr = 97;
    for(Chrtr = 97; Chrtr < 123 ; Chrtr++){
        cout<< Chrtr <<endl;
    }

    // another method 2;;
    char name ;
    for(name='a';name<='z';name++){
        cout<<name<<"  ";
    }
return 0;
}