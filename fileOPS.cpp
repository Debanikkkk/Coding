#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
ofstream outFile("helloworld.txt");

if(!outFile){
    cerr<< "there was a problem in writing into the file"<< endl;
    return 1;
}

outFile<<"this file was written by debanik pahilwani"<< endl;
outFile.close();


ifstream inFile("helloworld.txt");
if(!inFile){
    cout<< "there was a problem in readin gthis file";
    return 1;

}

string line;

while(getline(inFile, line)){
    cout<< line<< endl;

}

inFile.close();

}
