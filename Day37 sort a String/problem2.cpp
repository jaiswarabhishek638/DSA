// check the string is rotated by 2 place or not in both clockwise and anticlockwise;
#include<iostream>
using namespace std;
void rotateanticlock(string& s){
        char c = s[0];
        int index = 1;
        while(index<s.size()){
            s[index -1] = s[index] ;
            index++ ;
        };
        s[s.size()-1] = c;
    }
    void rotateclock(string& s){
        char c = s[s.size()-1];
        int index = s.size()-2;
        while(index >= 0){
            s[index + 1] = s[index] ;
            index-- ;
        };
        s[0] = c;
}
int main(){
    string str1,str2;
    cout<<"enter the 1st string: ";
    cin>>str1;
    cout<<"enter the 2nd string: ";
    cin>>str2;
    string clockwise = str1,anticlock =str1;
    rotateclock(clockwise);
    rotateclock(clockwise);

    if (clockwise == str2)
    {
        return 1;
    }
    rotateanticlock(anticlock);
    rotateanticlock(anticlock);
    if (anticlock == str2)
    {
        return 1;
    }


    return 0;
}