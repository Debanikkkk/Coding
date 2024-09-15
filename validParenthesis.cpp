#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s = "{[()]}";
    stack<char> paren;
    for (int i = 0; i < s.size(); i++)
    {
        paren.push(s[i]);
    }

    while (!paren.empty())
    {
        cout << paren.top() << endl;

        paren.pop();
    }

    return 0;
}