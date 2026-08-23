// size() , push_back ,pop_back ,append operation== combining 2 string ;
#include<iostream>
using namespace std;
int main(){
    string a="Rohit";
    string b = "Mohit";
    cout<<a.append(b)<<endl;
    cout<<a+b <<endl;//RohitMohit //append operation

    //size()
    cout<<a.size()<<endl;
    cout<<a.size()+b.size()<<endl;

    string s = "rohit";
    s.push_back('N');
    cout<<s<<endl;
    s.pop_back();
    cout<<s;

}