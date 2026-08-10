// Two pointers
// Segrigate 0 and 1;
#include<iostream>
#include<vector>
using namespace std;
int Segregate0and1(vector<int> &arr){
    int n = arr.size();
    int start = 0,end = n - 1;
    while (start < end)
    {
        if (arr[start] == 0)
        {
            start ++ ;
        }
        else{
            if (arr[end] == 0)
            {
                swap(arr[start],arr[end]);
                start ++ , end -- ;
            }
            else{
                end -- ;
            }
            
        }
        
    }
    
};
int main(){
    cout<<"enter the size: "<<endl;
    int n;
    cin>>n;
    cout<<" enter the element: "<<endl;;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    
    Segregate0and1(arr);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}