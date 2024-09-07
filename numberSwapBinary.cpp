#include <iostream>
using namespace std;

// public:
void binSwap(int &a, int &b){
    a=a^b;
    
    b=a^b;
    
    a=a^b;
   
}
int main(){
    int a;
    int b;

    cout<<"enter value for a";
    cin>>a;
    

    cout<<"enter value for b";
    cin>>b;

    cout<<"this is a "<< a;
    cout<<"this is b "<<b;
    binSwap(a, b);
    cout<<"this is a "<< a;
    cout<<"this is b "<<b;
      
      return 0;
}