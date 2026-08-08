// koko bana problem
#include<iostream>
using namespace std;
int minEatingSpeed(int piles[], int h,int n) {
        long long start =0,end=0,mid,ans;
        long long sum;
        for(int i = 0;i<n;i++){
            sum += piles[i];
            end = max(end,(long long)piles[i]);
        }
        if(h<1){
            return 0;
        }
        start /= h;
        if(!start){
            start = 1;
        }
        while(start <= end){
            mid = start + (end - start)/2;
            // mid amount of bananas to consumne in 1hr;
            long long total_time = 0;
            for(int i=0;i<n;i++){
                total_time += piles[i]/mid;
                if(piles[i]%mid){
                    total_time++;
                }
            }
            if(total_time > h){
                start = mid+1;
            }
            else{
                ans = mid;
                end = mid - 1;
            }
        }
        return ans;
};
int main(){
    int piles[1000];
    int n,h;
    cout<<"Enter the hour: ";
    cin>>h;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the element: ";
    for (int i = 0; i < n; i++)
    {
        cin>>piles[i];
    }
    cout<<minEatingSpeed(piles,h,n);
}