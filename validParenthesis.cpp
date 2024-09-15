#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;
bool isValidParethesis(string &s){
    unordered_map <char, char> umap={{']','['}, {'}','{'}, {')','('}};
    stack <char> stk;

    for(const auto &c: s){
        if(umap.find(c)!=umap.end()){
            if(stk.empty()){
                return false;
            }

            if(stk.top()!=umap[c]){
                return false;
            }

            stk.pop();
        }

        else{
            stk.push(c);
        }

    }; 
    
return stk.empty();
}
int main()
{
    string s = "{[()]}";
    bool result=isValidParethesis(s);
    return result;

   
}