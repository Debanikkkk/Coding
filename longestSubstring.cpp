#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int longestSubstring(string s){
    int l=0;
        int r=0;
        // int count=0;
        int maxl=0;

        unordered_set<char> uset;

        while(r< s.size()){
            
            if(uset.find(s[r])!=uset.end()){
                maxl=max(maxl, r-l);
                l=r;
                uset.clear();
            }

            else{
                uset.insert(s[r]);
            }

        }
        return maxl;
}

int main(){
string abc="abcacac";
int result=longestSubstring(abc);
return result;
}