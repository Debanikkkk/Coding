#include <iostream>
#include <cmath>
using namespace std;

int findComplement(int num) {
        string bin="";
        while(num>0){
            bin=(num%2==0?"0":"1")+bin;
            num/=2;
        }

        string revbin="";

        for(int i=0; i<bin.length(); i++){
            revbin[i]=(bin[i]=='0'?'1':'0');
        }
        // int result=stoi(revbin);
double newnum=0;
        for(int i=revbin.length()-1; i>=0; i--){
            int hm=revbin[i]-'0';
            newnum+=(hm==0?0:pow(2, i));
        }
    int result=static_cast<int>(newnum);
        return result;
    }
    int main(){
        findComplement(5);
        return 0;
    }