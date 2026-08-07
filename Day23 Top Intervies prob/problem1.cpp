// Allocate Minimum Pages arr={12,34,67,90},n=4,student =2; //ans = 113
// test cases 
// 1.Each student receives atleast one book.
// 2.Each student is assigned a contiguous sequence of books.
// 3.No book is assigned to more than one student.
// 4.All books must be allocated.
#include<iostream>
using namespace std;
int findPages(int arr[], int n,int M) {
        // code here
        if(M>n){
            return -1;
        }
        int ans = -1;
        long long start = 0,end = 0, mid;
        for(int i=0;i<n;i++){
            start = max(start,(long long)arr[i]);
            end += arr[i];
        }
        
        while(start <= end){
            mid = end + (start - end)/2;
            int pages = 0,count =1;
            for(int i = 0;i<n;i++){
                pages += arr[i];
                if(pages > mid){
                count++ ;
                pages = arr[i];
                }
                
            }
            if(count <= M){
                ans = mid;
                end = mid -1;
            }
            else{
                start = mid +1;
            }
        }
        return ans;
    }
int main(){
    int arr[1000],student,n;
    cout<<"Enter the size:";
    cin>>n;
    cout<<"Enter the no of student:";
    cin>>student;
    cout<<"Enter the element :";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<findPages(arr,n,student);
    

}