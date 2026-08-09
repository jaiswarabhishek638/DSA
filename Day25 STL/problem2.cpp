#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    cout<<"Size of a is "<<a.size()<<endl;
    cout<<"Capacity of a is "<<a.capacity()<<endl;

    a.push_back(4);//0 index
    a.push_back(6);//1 index
    a.push_back(8);//2 index
    cout<<"Size of a is "<<a.size()<<endl;
    cout<<"Capacity of a is "<<a.capacity()<<endl;
    
    // update 6 to 10;
    a[1]=10;// 1st index 10 store kar do 
    
    cout<<a[0]<<" ";
    cout<<a[1]<<" ";
    cout<<a[2]<<" ";
    cout<<a[3]<<" "<<endl;//no value there by default zero is there 
    
    // to print the vector in the output using loop
    for (int i = 0; i < a.size();i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
    
    
    // size and capacity remain same when the vector is declare it size ;as the size capacity is also the same;;
    vector<int>a1(5,1);//size(5),put every element is 1;   1 1 1 1 1 ;

    for (int i = 0; i < a1.size();i++)
    {
        cout<<a1[i]<<"  ";
    }
    cout<<endl;

    
    cout<<"Size of a1 is "<<a1.size()<<endl;
    cout<<"Capacity of a1 is "<<a1.capacity()<<endl;
    // when ever we initialize the size then the capacity remains same as the size ;
    
    a1.push_back(10);
    cout<<"Size of a1 is "<<a1.size()<<endl;//size increased by 1
    cout<<"Capacity of a1 is "<<a1.capacity()<<endl;//capacity double X2

    vector<int> a2 = { 4, 6, 4, 8,10,15,65 };//in some other casse it is not acceptable for the code editor but in online complier it is valid;
    for (int i = 0; i < a2.size(); i++)
    {
        cout<<a2[i]<<" ";
    }
    
     
}