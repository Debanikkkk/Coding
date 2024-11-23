#include <iostream>
#include <string>
using namespace std;
class Copying
{
private:
    string str;

public:
    Copying(string s) : str(s) {}

    Copying(const Copying &other)
    {
        str = (other.str) + 's';
        cout << "copy constructorr called" << endl;
    }

    ~Copying()
    {
        cout << "a destructor has been created" << endl;
    }
    void display()
    {
        cout << "the string is " << str << endl;
    }
};

int main()
{
    // Copying *str1=new Copying("hello");

    Copying str1("hello there");
    str1.display();

    Copying str2 = str1;
    str2.display();

    return 0;
}