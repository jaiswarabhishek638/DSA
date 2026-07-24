#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long binary=0, place = 1;
    int octal , decimal = 0, rem, i = 0;

    cout << "Enter a octal number: ";
    cin >> octal;

    // Step 1: Convert  octal to decimal
    while (octal > 0) {
        rem = octal % 10;
        decimal += rem * pow(8,i);
        octal /= 10;
        i++;
    }
    
    // Step 2: Convert decimal to binary
    while (decimal> 0) {
        rem = decimal % 2;
        binary += rem *place;
        decimal /= 2;
        place*=10;
    }

    cout << "Octal equivalent: " << binary << endl;
    return 0;
}
