// sum of the 2 number using string;
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string add(string num1, string num2){
        string ans;
        int index1 = num1.size()-1,index2 = num2.size()-1;
        
        int carry = 0,sum = 0;
        while(index2 >=0){
            sum = num1[index1] -'0' + num2[index2]-'0' + carry;
            carry = sum/10;
            char c ='0' + sum%10;
            ans += c;
            index1 -- ,index2-- ;

        }
        // index 1 still exist
        while(index1 >= 0){
            sum = num1[index1] - '0' + carry;
            carry = sum/10;
            char c = '0'+sum%10;
            ans += c;
            index1--;
        }
        if(carry){
            ans += '1';
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
    string addStrings(string num1, string num2) {
        if(num1.size()<num2.size())
        return add(num2,num1);
        else
        return add(num1,num2);
    
    }
int main(){
    string num1,num2;
    cout<<"enter the number1: ";
    cin>>num1;
    cout<<"enter the number2: ";
    cin>>num2;
    cout<<addStrings(num1,num2);
}