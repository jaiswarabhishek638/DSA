// factorial using array/string in reverse order of carry;
// it is good thing in this (no (int overflow)) error occurs;
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> factorial(int n) {
        // code here
        vector<int>ans(1,1);
        while(n > 1){
            int carry = 0,size=ans.size(),result;
            for(int i=0;i<size;i++){
                result = ans[i]*n + carry;
                carry = result/10;
                ans[i] = result%10;
            }
            while(carry){
                ans.push_back(carry%10);
                carry/=10;
            }
            n--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    for ( int x : factorial(n))
    {
        cout<<x;
        
    }
    cout<<endl;
    
    
}