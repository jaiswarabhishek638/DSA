// selection sort in an array--> select first element of array compare to the other element and swap them with each other
// eg : arr[] = { 14,6,9,3,2,1};
    // round 1    swap(14,1)
        // {1,6,9,3,2,14};
    // round 2    swap(6,2)
        // {1,2,9,3,6,14};
    // round 3    swap(9,3)
        // {1,2,3,9,6,14};
    // round 4    swap(9,6)
        // {1,2,3,9,6,14};
    // round 5    compare(6,14)// satisfies

    #include<iostream>
    using namespace std;
    int main(){
        int arr[7]={9,4,14,7,3,2,1};
        
        for (int i = 0; i < 6 ; i++)
        {
            int index = i;

            for (int j= i+1; j < 7; j++)
            {
                if (arr[j]<arr[index])
                {
                    index = j;
                }
                swap(arr[i],arr[index]);
                
            }
            
        }

        for (int i = 0; i < 7; i++)
        {
            cout<<arr[i]<<" ";
        }
        
        
        
    }