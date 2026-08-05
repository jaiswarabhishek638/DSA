//problem 69: sqrt(x)
/*
For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 
Example 1:
Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.

Example 2:
Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
*/

#include<iostream>
using namespace std;
int SQRT(int x){
    int start =1,end = x;
    int  mid,ans;
    if(x<2){
        return x;
    }
    while (start <= end)
    {
        mid = start + (end - start)/2;
        // if (mid * mid == x) // int overflow 
        if(mid == x/mid)
        {
            ans =mid;
            break;
        }
        else if (mid < x/mid)
        {
            ans = mid;
            start = mid +1;
        }
        else{
            end = mid -1 ;
        }
    }
    return ans;
    
}
int main(){
    int x;
    cout<<"Enter the No: ";
    cin>>x;
    cout<<SQRT(x);
} 