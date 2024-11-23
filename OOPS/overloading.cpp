#include <iostream>
#include <string>
using namespace std;

class Overloading{
    private:
    int data;

    public:
    Overloading(int d): data(d){}
    int addToData(int num){
        cout<< data+num;
        return data+num;
    };
    int addToData(double num){
        cout<< data-num;
        return data-num;
    };
};
int main(){
Overloading* ov1=new Overloading(12);

ov1->addToData(5);
ov1->addToData(34.0);

return 0;
}