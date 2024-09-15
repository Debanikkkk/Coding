#include <stack>
#include <vector>
#include <iostream>
using namespace std;

    int evalRPN(vector<string>& tokens) {
        stack <int> stk;
        for(const auto &x: tokens){
            if(x=="+"){
                int a=stk.top();
                stk.pop();
                int b=stk.top();
                stk.pop();
                int c=a+b;
                stk.push(c);
            }

            else if(x=="-"){
                int a=stk.top();
                stk.pop();
                int b=stk.top();
                stk.pop();
                int c=b-a;
                stk.push(c);
            }

            else if(x=="*"){
                int a=stk.top();
                stk.pop();
                int b=stk.top();
                stk.pop();
                int c=a*b;
                stk.push(c);
            }

            else if(x=="/"){
                int a=stk.top();
                stk.pop();
                int b=stk.top();
                stk.pop();
                int c=b/a;
                stk.push(c);
            }
            else {
                stk.push(stof(x));
            }             
        }

        return stk.top();
    }
int main(){
    vector <string>  stings={"2", "6", "+", "4", "/"};
    int result=evalRPN(stings);
    cout<<result;
    return result;

}
