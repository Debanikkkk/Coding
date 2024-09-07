#include <unordered_map>
#include <iostream>

using namespace std;
    bool isAnagram(string s, string t) {
            int count = 0;
        unordered_map<char, int> unmap;

        for (int i = 0; i < s.length(); i++) {
            if (unmap.find(s[i]) != unmap.end()) {
                unmap[s[i]]++;
                cout<< "increment is made";
            }
            else{
                unmap[s[i]] = 1;
            }
            
        }
     for (auto i : unmap) {
           cout<< "key is: "<< i.first<< " value is: "<< i.second<<endl;
        }
        for (int i = 0; i < t.length(); i++) {
            if (unmap.find(t[i]) != unmap.end()) {
                unmap[t[i]]--;
                if(unmap[t[i]]<0){
                    return false;
                }
            }
            else{
            return false;
            }
        }
   for (auto i : unmap) {
           cout<< "key is: "<< i.first<< " value is: "<< i.second<<endl;
        }
        for (auto i : unmap) {
            count += i.second;
        }
cout<<count;
        if (count == 0) {
            return true;
        } else {
            return false;
        }
    }
    int main(){

        string s="a";
        string t="ab";
isAnagram(s, t);
return 0;
    }