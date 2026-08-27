// sort a sentence:
// ip "is2 sentence4 this1 a3"
// op: - this is a sentence
#include<iostream>
#include<vector>
using namespace std;
string sortSentence(string s) {
vector<string> ans(10);
    string temp = "";
    int count = 0;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            // Process word before space
            int pos = temp.back() - '0';
            temp.pop_back();
            ans[pos] = temp;
            temp.clear();
            count++;
        } else {
            temp += s[i];
        }
    }
    
    // Process the very last word (it has no trailing space)
    if (!temp.empty()) {
        int pos = temp.back() - '0';
        temp.pop_back();
        ans[pos] = temp;
        count++;
    }
    
    // Reconstruct the sorted sentence
    string result = "";
    for (int i = 1; i <= count; i++) {
        result += ans[i];
        if (i < count) {
            result += ' '; // Add space between words only
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