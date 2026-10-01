#include<iostream>
using namespace std;
void Five(char *str1,char *str2){
    while ((*str1 = *str2))
    {
        str1++ , str2++;
    }
}
int main(){
    char First[] = "Mohit";
    char Second[] = "Rohan";
    Five(First,Second);
    cout<<First;
}