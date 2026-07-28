// Armstrong number -- 145 ;--3 digit
// 1^3 + 4^3 + 5^3 = 1 + 64 + 125 = 180
// 180!=145;//Not a Armstrong number;

#include<iostream>
#include<math.h>
using namespace std;
int CalDigit(int num)
{
    int count = 0;
    while(num)
    {
        count++;
        num = num/10;
    }
    return count;
}
bool ArmStrong(int n,int digit)
{
    int num=n,ans=0;
    while (n)
    {
        int rem;
        rem = n%10;
        n = n/10;
        ans= ans +round(pow(rem,digit));//
    }
    if (ans == num)
    {
        return 1;
    }else {
        return 0;
    }
    
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int digit = CalDigit(num);
    cout<<"The no of digit is "<<digit<<endl;
    cout<<"Armstrong number is "<<ArmStrong(num,digit)<<endl;
}