// problem find the element in a 2d array;
#include<iostream>
using namespace std;

int main(){
    int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // intitialization of 2d array
    // find x;
    
    int x;
    cout << "element to find: ";
    cin >> x;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == x)
            {
                cout << "yes";
                return 1;
            }
        }
    }
    cout << "no";

   
}