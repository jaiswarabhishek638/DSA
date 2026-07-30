// missing no in an array;
#include<iostream>
#include<vector>
using namespace std;
int Missing(vector<int> &arr,int n){
    long long sum=0;
    for (int i = 0; i <n; i++)
    {
        sum+=arr[i];
    }
    long long ans = (n+1)*(n+2)/2;
    cout<<ans-sum;
    return ans-sum;
}
int main(){
    std::vector<int> arr={1,2,3,4,5,7,8};
    int r1= Missing(arr,5);
}