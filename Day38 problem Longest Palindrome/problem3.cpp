// best approach of sort a sentence
#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
string sortSentence(string s) {
    
    vector<string> ans(10);
    stringstream ss(s);
    string word;
    int count = 0;
    
    // Split by spaces automatically
    while (ss >> word) {
        int pos = word.back() - '0'; 
        word.pop_back();             
        ans[pos] = word;             
        count++;                     
    }
    
    // Reconstruct the sentence
    string result = "";
    for (int i = 1; i <= count; i++) {
        result += ans[i];
        if (i < count) {
            result += " ";
        }
    }
    
    return result;
}
int main(){
    string s;
    cout<<"enter the sentence: ";
    // such as 
    // "is2 sentence4 this1 a3"
    getline(cin,s);
    cout<<sortSentence(s);
}