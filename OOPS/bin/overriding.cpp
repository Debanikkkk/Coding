#include <iostream>
#include <string>

using namespace std;

class Area{
    public:
    virtual double area()=0;
};

class Circle: public Area{
private:
int radius;

public:
Circle(int r): radius(r){
    cout<< "a circle constructor has been created";
};
~Circle(){
    cout<<"a cricle destructor has been created"<< endl;
}
double area() override{
    double area=3.14*radius*radius;
    cout<<area;
    return area;
}
};
int main(){
// Circle* c1=new Circle(12);
Circle c1(5);
c1.area();
c1.~Circle();
// c1->area();
// delete c1;
return 0;
}