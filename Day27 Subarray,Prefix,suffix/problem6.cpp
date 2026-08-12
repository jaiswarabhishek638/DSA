// max differenc between 2 element;
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int MaxDiff(vector<int> arr){
    int n = arr.size();
    int Suffix[n];
    Suffix[n-1] = arr[n - 1];
    for (int i = n-2; i >= 0; i--)
    {
        Suffix[i] = Suffix[i+1],arr[i];
    }
    int Ans= INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        Ans = max(Ans , (Suffix[i+1] - arr[i]));
    }
    return Ans;
    
}
int main(){
    int n;
    cout<<"Size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Element of an array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<MaxDiff(arr);
     
}