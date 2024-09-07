#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"ENTER THE NUMBER"; 
    cin>>a;
    string binary="";
    while (a>0){
        binary=(a%2==0? "0":"1")+binary;
        a/=2;
    }
cout<<binary;
    return 0;
}