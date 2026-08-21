// missing and repatation no  and occurance busing % and /;
// input is size 7 , element : 4 3 2 1 2 7 6;
#include<iostream>
#include<vector>
using namespace std;
vector<int> findTwoElement(vector<int>& arr) {
        // arr value -1 ;
        int n = arr.size();
        for(int i = 0;i<n;i++){
            arr[i]--;
        }
        //occurence;
        //correspnding no ke through n ko store kana hai
        for(int i =0;i<n;i++){
            arr[arr[i]%n]+=n;
        }
        vector<int>ans(2);
        for(int i =0;i<n;i++){
            // find repatation;
            if(arr[i]/n == 2){
                ans[0]=i+1;
                break;
            }
            //find missing;
            else if(arr[i]/n == 0){
                ans[1]=i+1;
                break;
            }
        }
        return ans;
    }
int main(){
    int n;
    cout<<"Size: ";
    cin>>n;
    vector<int>arr(n,0);
    cout<<"element in array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    vector<int> ans = findTwoElement(arr);
    cout<<"repation no and misising no are: [ ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" , ";
    }
    cout<<" ]";
    
    
    
}