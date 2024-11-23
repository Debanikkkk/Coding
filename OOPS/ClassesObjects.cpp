#include <iostream>
#include <string>
using namespace std;
class Car{
    private:
    string color;

    public: 
    Car(string c): color(c){}
    virtual void showColor(){
        cout<< "the color is "<< color;
    }
};

class Fruit: public Car{
    private:
    string color;

    public:
    Fruit(string c): Car(c),color(c){} 
    void showColor() override {
        cout<< "the fruit color is "<<color;
    }
};

int main(){
Car* c1= new Car("ORANGE");
Car* c2=new Fruit("PURPLE");

c1->showColor();
c2->showColor();
return 0;


}