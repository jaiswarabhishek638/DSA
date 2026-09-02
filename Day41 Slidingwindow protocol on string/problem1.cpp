// longest string withouth any repetation: leetcode: 3;
// ip :- 42a5s6z8da52d5wd2@@(/.,
// op:- 9
#include<iostream>
#include<vector>
using namespace std;
int lengthOfLongestSubstring(string s) {
    int first=0,second=0,length=0;
    vector<bool>count(256,0);
    while(second < s.size()){
        while(count[s[second]]){
            count[s[first]] = 0;
            first++;
        }
        count[s[second]]=1;
        length = max(length, second - first + 1);
        second++ ;
    }
    return length;
}
int main(){
    string s;
    cout<<"enter any symbol,character or no to find thelongest substring:"<<endl;
    cin>>s;
    cout<<"Length is: "<<lengthOfLongestSubstring(s);
}