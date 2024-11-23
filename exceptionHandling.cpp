#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int divide(int a, int b){
    if(b==0) throw runtime_error("YOU HAVE TRIED TO DIVIDE BY ZERO");
    return a/b;
}

void readFile(const string &filename){
ifstream inFile(filename);
if(!inFile){
    throw runtime_error("THIS FILE "+filename+ " CANNOT BE OPENED");
}
string line;

while(getline(inFile, line)){
    cout<< line<< endl;
}
}
int main(){
    int a=4223;
    int b=0;

    try{
        divide(a, b);
    } catch(const runtime_error &r){
        cout<< "ERROR: "<<r.what();
    }
try{
    readFile("helloworld1.txt");

}catch(const runtime_error &e){
    cout<< e.what()<< endl;
}


    return 0;

}