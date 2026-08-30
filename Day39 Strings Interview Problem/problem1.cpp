// sort vowel in a string;
    #include<iostream>
    #include<vector>
    using namespace std;
string sortVowels(string s) {
        int n = s.size();
        vector<int> lower(26,0),upper(26,0);
        //check lower and upper for all alphabet how may time it occurs
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]== 'i' || s[i]=='o' || s[i]=='u'){
                lower [s[i]-'a']++ ;
                s[i]='#';
            }
            if(s[i]=='A' || s[i]=='E' || s[i]== 'I' || s[i]=='O' || s[i]=='U'){
                upper [s[i]-'A']++ ;
                s[i]='#';
            }
        }
        string ans;
        // upper case
        for(int i=0;i<26;i++){
            char c='A'+i;
            while(upper[i]){
                ans += c;
                upper[i]--;
            }
            
        }
        // // lower case;
        for(int i=0;i<26;i++){
            char d='a'+i;
            while(lower[i]){
                ans+=d;
                lower[i]-- ;
            }
        }

        int first =0,second=0;
        // i have s = "lEotcedE" == " l # # t c # d #";
        // ans = "EEeo";
        while(second < ans.size()){
            if(s[first] == '#'){
                s[first] = ans[second];
                second++;
            }
            first ++ ;
        }
        return s;
        }
int main(){
    string s;
    cout<<"enter a words:";
    cin>>s;
    cout<<sortVowels(s);
}