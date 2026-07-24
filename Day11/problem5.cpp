// // binary to octal
// #include<iostream>
// using namespace std;
// int main(){
//     int num, mult=1,rem;
//     long long ans;
//     cout<<"Enter the number: ";
//     cin>>num;
//     while (num>0){
//         //binary to decimal   
//         rem=num%10;
//         num =num/10;
//         ans=rem*mult+ans;
//         mult =mult* 2;
//     }
//     while (ans>0)
//     {
//         // now decimmal to octa
//         rem=num%8;
//         num=num/8;
//         ans=rem*mult+ans;
//         mult =mult* 10;
//     }  
//     cout<<ans;
// }


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long binary;
    int octal = 0, decimal = 0, rem, i = 0, place = 1;

    cout << "Enter a binary number: ";
    cin >> binary;

    // Step 1: Convert binary to decimal
    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * pow(2, i);
        binary /= 10;
        i++;
    }

    // Step 2: Convert decimal to octal
    while (decimal > 0) {
        rem = decimal % 8;
        octal += rem * place;
        decimal /= 8;
        place *= 10;
    }

    cout << "Octal equivalent: " << octal << endl;
    return 0;
}
