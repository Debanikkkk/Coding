#include <iostream>
#include <vector>

using namespace std;

int countDigitSeven(int num) {
    int count = 0;
    while (num > 0) {
        if (num % 10 == 7) { // Check if the last digit is 7
            count++;
        }
        num /= 10; // Remove the last digit
    }
    return count;
}

vector<int> largestTwo(vector<int> arr){
    int l=arr[0];
    int sl=l;
    vector <int> result;
    for(int i=0; i<arr.size(); i++){

        if(arr[i]>l){
            sl=l;
            l=arr[i];
        }

    }
    result.push_back(l);
    result.push_back(sl);
    return result;
}


int fibonacci(int index) {
    if (index<=1){
        return index;
    }
    return fibonacci(index - 1) + fibonacci(index - 2);
}
int main(){
    vector<int> test={5, 66, 77, 22, 11};
    vector<int> num=largestTwo(test);
    
    for(int i=0;  i<num.size(); i++){
        cout<< num[i]<< ',';
    }
}