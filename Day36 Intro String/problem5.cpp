// print rohit is a "good " boy;
#include<iostream>
using namespace std;
int main(){
    // string s = "rohit negi is a "good"boy "; error **escape character **
    string s = "rogit negi is a \" good \" boy";
    cout<<s<<endl;
    // string a= "\";// print \ ;
    string a = "\\";
    cout<<a;
}