// converting integer to romain

#include<iostream>
using namespace std;
string intToRoman(int num) {
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string syms[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
        string result = "";
        int i = 0;
        
        while (num > 0) {
            
            int count = num / values[i];
    
            while (count > 0) {
                result += syms[i];
                count--;
            }
            num %= values[i];
            i++;
        }
        
        return result;
    }
int main(){
    int s;
    cout<<"enter the number max(3999):";
    cin>>s;
    cout<<intToRoman(s);

}