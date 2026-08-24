// defanging an IP adderess
// input:- 124.654.101.11
//o/p:- 124[.]654[.]101[.]11
#include<iostream>
using namespace std;
string defangIPaddr(string address) {
        int index=0;
        string ans;
        while(index < address.size()){
            if(address[index]=='.'){
                ans += "[.]";
            }
            else{
                ans += address[index];
            }
            index++;
        }
        return ans;
    }
int main(){
    string address;
    cout<<"enter the address: ";
    cin>>address;
    cout<<defangIPaddr(address);

}