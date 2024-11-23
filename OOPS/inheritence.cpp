#include <iostream>
#include <string>
using namespace std;
class Vehicle{
    public:
    void startEngine(){
        cout<<"starting the engine";
    }
};

class Car: public Vehicle{
public:
    void vroom(){
        cout<< "vroom vroom"<<endl;
    }

};

int main(){
    Car* c1=new Car();
    c1->startEngine();
    c1->vroom();
    return 0;
}