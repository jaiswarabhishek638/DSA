// search element of an array;
#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        int n=arr.size(),index=-1;
        for(int i=0;i<n;i++){
            if(arr[i] == x){
                index=i;
                break;
            }
        }
        cout<<index;
        return index;
    }
};
int main(){
    
};