#include <iostream>
#include <vector>
using namespace std;

int factorialReturn(int a)
{
    if (a == 0 || a == 1)
        return 1;

    return a * factorialReturn(a - 1);
}

int fibonacciReturn(int a)
{
}

void reverseString(string &s, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    swap(s[start], s[end]);
    reverseString(s, start + 1, end - 1);
}

int sumOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    // n = n / 10;
    return n % 10 + sumOfDigits(n / 10);
}

int powerOfNumber(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }

    return a * powerOfNumber(a, b - 1);
}

bool palindromeCheck(string s, int start, int end)
{

    if (start >= end)
    {
        return true;
    }

    else if (s[start] != s[end])
    {
        return false;
    }

    return palindromeCheck(s, start + 1, end - 1);
}

void printTillN(int n)
{
    if (n == 0)
    {
        return;
    }
    printTillN(n - 1);
    cout << n << " ";
}

int minArray(vector<int> arr)
{
}

int sumOfArray(vector<int> arr, int start)
{
    if (start == arr.size() - 1)
    {
        return arr[arr.size() - 1];
    }
    return arr[0] + sumOfArray(arr, start + 1);
}
int main()
{
    int n = 5;
    int result = factorialReturn(n);
    cout << "the factorial is " << result;

    string s = "hello";
    cout << "the string is, " << s;
    reverseString(s, 0, s.length() - 1);
    cout << "the reversed string is, " << s << endl;

    int resultSum = sumOfDigits(321);
    cout << "the resultant sum is " << resultSum << endl;

    int power = powerOfNumber(2, 3);
    cout << "the power is" << power << endl;

    string a = "madame";
    bool pal = palindromeCheck(a, 0, a.length() - 1);
    cout << "is it a palindrome?:" << pal << endl;

    printTillN(11);

    // vector<int> a = {1, 2, 3, 4};
    // int sum = sumOfArray(a, 0);
    // cout << "the sum is " << sum;
    return 0;
}