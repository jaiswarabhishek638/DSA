// roman to integer conversion
#include<iostream>
using namespace std;
int num(char c){
    if (c == 'I' || c== 'i')
    return 1;
    else if (c == 'V' || c== 'v')
    return 5;
    else if (c == 'X' || c== 'x')
    return 10;
    else if (c == 'L' || c== 'l')
    return 50;
    else if (c == 'C' || c== 'c')
    return 100;
    else if (c == 'D' || c== 'd')
    return 500;
    else if (c == 'M' || c== 'm')
    return 1000;
}
int RomToINT(string s){
    int sum = 0,index =0;
    while (index < s.size()-1)
    {
        if (num(s[index]) < num(s[index+1]))
        sum -= num(s[index]);
        else
        sum += num(s[index]);

        index++ ;   
    }
    sum += num(s[s.size()-1]);
    return sum;
    
}

int main(){
    string s;
    cout<<"enter the roman: ";
    cin>>s;
    cout<<RomToINT(s);
}