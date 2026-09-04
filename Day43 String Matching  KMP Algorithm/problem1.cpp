//leetcode: 28- Find the Index of the First Occurrence in a String
#include<iostream>
#include<vector>
using namespace std;
void lpsfind(vector<int>&lps, string &s){
    int pre = 0, suf = 1;
    while (suf < s.size())
    {
        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            pre++, suf++;
        }
        else
        {
            if (pre == 0)
            {
                lps[suf] = 0;
                suf++;
            }
            else
            pre = lps[pre - 1];
        }
    }
}
    int strStr(string haystack, string needle) {
        vector<int>lps(needle.size(),0);
        lpsfind(lps,needle);
        int first = 0,second = 0;
        while(second < needle.size() && first < haystack.size()){
            if( haystack[first]==needle[second])
            second++ , first++ ;
            else{
                if(second == 0)
                    first ++;
                else
                    second = lps[second - 1];
            }
        }
    if(second == needle.size()){
        return first-second ;
    }
    return -1;
}
int main(){
    string mainnn,comparisor;
    cout<<"enter the main string:"<<endl;
    cin>>mainnn;
    cout<<"enter the main string:"<<endl;
    cin>>comparisor;
    cout<<strStr(mainnn,comparisor);

}



// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.

// eg2 
// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we return -1.