#include <iostream>
#include <vector>
#include <string>
// #include <cstring>


using namespace std;

          string encode(vector<string>& strs) {
            string result;
             for(int i=0; i<strs.size(); i++){
        
          string len=strs[i]+to_string(strs[i].length())+"#";
            result+=len;
        }

        return result;
    }

    vector<string> decode(string s) {
            vector<string> result;
            for(int i=0; i<s.size()-1; i++){
                string word;
                int rog=7;
                if(typeid(s[i]).name()==typeid(rog).name()  &&   s[i+1]=='#'){
                    for(int j=i+2; j<stoi(s[i])-1; j++){
                        word+=s[j];
                    }
                    i+=1+stoi(s[i]);
                    result+=word;
                }

            }
            return result;
    }

    int main(){
        
    }