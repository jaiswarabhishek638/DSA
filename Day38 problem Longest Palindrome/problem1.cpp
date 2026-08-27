// longest palindrome
#include<iostream>
#include<vector>
using namespace std;
int longestPalindrome(string s) {
    vector<int> lower(26,0),upper(26,0);
    bool odd=0;
    int count = 0;
    // frequency of the element 
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'){
            lower [s[i] - 'a']++ ;
        }
        else{
            upper [s[i] - 'A']++ ;
        }
    }
    for(int i =0; i<26;i++){
        if(lower[i]%2 == 0){
            count += lower[i];
        }
        else{
            count += lower[i] - 1;
            odd = 1;
        }
        // for upper
        if(upper[i]%2==0){
            count += upper[i];
        }
        else{
            count += upper[i] - 1;
            odd =1;
        }
    }
    return count+odd;
}
int main(){
    string s;
    cout<<"enter the string:"<<endl;
    cin>>s;
    cout<<longestPalindrome(s);
}