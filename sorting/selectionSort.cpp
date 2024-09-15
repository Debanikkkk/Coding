#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector <int> &nums){
    for(int i=0; i<=nums.size()-1; i++){
        int min=nums[i];
        int index=i;
        for(int j=i; j<nums.size()-1; j++){
            if(nums[j]<min){
                min=nums[j];
                index=j;            
                }
        }
        swap(nums[i], nums[index]);
        
    };
};

int main(){


vector <int> arr={24, 44, 12, 3, 11, 66};
for(int i=0; i<arr.size()-1; i++){
    cout<< arr[i]<<", ";
}

cout<<endl;

selectionSort(arr);

for(int i=0; i<arr.size()-1; i++){
    cout<< arr[i]<<", ";
}
}