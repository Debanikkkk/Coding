#include <iostream>
#include <string>
using namespace std;

void showNum(int *ptr)
{
    cout << "the number is" << *ptr << endl;
}

void showNumRef(int &num)
{
    cout << "the number is " << num << endl;
}

int main()
{
    int a = 5;
    int *ptr = &a;

    showNum(ptr);
    showNumRef(a);

    return 0;
}