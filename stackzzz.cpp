#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<char> first_stack;
    char a='a';
    char b='b';
    char c='c';
    char d='d';
    char e='e';

    first_stack.push(a);
    first_stack.push(b);
    first_stack.push(c);
    first_stack.push(d);
    first_stack.push(e);

    while(!first_stack.empty()){
        cout<<first_stack.top()<<endl;
        first_stack.pop();
    }

}


















