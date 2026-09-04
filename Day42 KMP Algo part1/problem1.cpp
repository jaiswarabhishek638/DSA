// Longest Prefix Suffix
// Input: s = "aabcdaabc"
// Output: 4
// Explanation: The string "aabc" is the longest prefix and suffix.
#include <iostream>
#include <vector>
using namespace std;
int getLPSLength(string &s)
{
    // code here
    vector<int> lps(s.size(), 0);
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
            {
                pre = lps[pre - 1];
            }
        }
    }
    return lps[s.size() - 1];
}
int main()
{
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;
    cout<<getLPSLength(s);
}