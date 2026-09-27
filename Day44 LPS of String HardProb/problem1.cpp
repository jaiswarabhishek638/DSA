#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int minChar(string &s) {
        //reverse of a string 
        string rev = s;
        reverse(rev.begin(),rev.end());
        int size = s.size();
        s += '$';//add seperator in string
        s += rev;//add reverse in a string;
        
        //longest prefix find
        int n = s.size();
        vector<int>lps(n,0);
        int pre = 0,suf = 1;
        while(suf < s.size()){
            //matched 
            if(s[pre] == s[suf]){
                lps[suf] = pre + 1;
                pre++,
                suf++;
            }
            //not matched
            else{
                if(pre == 0){
                    lps[suf]=0;
                    suf++;
                }
                else{
                    pre = lps[pre - 1];
                }
            }
            
        }
        //final answer
        return size - lps[n - 1];
        
    }
int main(){
    string s;
    cout<<"Enter the String : ";
    cin>>s;
    cout<<minChar(s);
}