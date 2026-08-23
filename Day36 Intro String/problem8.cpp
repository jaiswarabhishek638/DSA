// check the string is pallindome or not;
#include<iostream>
using namespace std;
int main(){
    string s = "NAMAM";
    int start = 0,end = s.size()-1;
    while (start < end)
    {
        if (s[start] != s[end])
        {
            cout<<"not a pallindome";
            return 0;
        }
        start++ ,
        end--;
    }
    
    cout<<"It is a pallindome";
}