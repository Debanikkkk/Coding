#include <iostream>
#include <vector>
using namespace std;

void reverseArr(vector<int>&arr){
    int left=0;
    int right=arr.size()-1;
    while(left<right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main(){
    vector<int> nums= {1, 2, 3, 4, 5};
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<",";
    }
    reverseArr(nums);
    cout<<"AFTER REVERSAL"<<endl;
for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<",";
    }


}