// gfg: The Painter's Partition Problem-II
// arr = {5,10,30,20,15}; size = 5,painter = 3;
#include <iostream>
using namespace std;
int minTime(int arr[],int n, int k)
{
    int ans = -1;
    long long start = 0, end = 0, mid;
    if (k > n)
    {
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        start = max(start, (long long)arr[i]);
        end += arr[i];
    }
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int wall = 0, count = 1;
        for (int i = 0; i < n; i++)
        {
            wall += arr[i];
            if (wall > mid)
            {
                count++;
                wall = arr[i];
            }
        }
        if (count <= k)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int main(){
    int n,No_painter,arr[1000];
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter no of painter: ";
    cin>>No_painter;
    cout<<"Enter the element: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Minimum time is "<<minTime(arr,n,No_painter);
}