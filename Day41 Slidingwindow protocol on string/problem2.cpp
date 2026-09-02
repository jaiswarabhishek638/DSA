// smallest distinct window:
// to find unique character first ;;
// ip :- aabcbcdbca
// op :- 4
#include<iostream>
#include<vector>
using namespace std;
    int findSubString(string& str) {
        vector<int>count(255,0);
        int first = 0,second=0,diff=0;
        // calculate all the unique character;
        while(first < str.size()){
            if(count[str[first]]==0){
                diff++ ;
            }
            count[str[first]]++;
            first++ ;
        }
        //intitailly all the character "0";
        for(int i = 0;i<256;i++){
            count[i]=0;
        }
        first = 0;
        
        int len= str.size();
        while(second < str.size()){
            //diff exist karta hai
            while(diff && second<str.size() ){
                if(count[str[second]]==0){
                    diff--;
                }
                count[str[second]]++;
                second++;
            }
            len = min(len,second-first);
            
            // diff 1 na ban jaye;
            
            while(diff != 1){
                len = min(len,second - first);
                count[str[first]]--;
                if(count[str[first]]==0){
                    diff++ ;
                }
                first++ ;
            }
        }
        return len;
        
    }
int main(){
    string s;
    cout<<"enter the string to find smallest distinct window: "<<endl;
    cin>>s;
    cout<<"lenth is: "<<findSubString(s);
}