#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &nums, int &target){
    int l=0;
    int r=nums.size()-1;

    while(l<=r){ //meaning that the code will go on till the window exists 
        int m=l+((r-l)/2);
        if(nums[m]>target){
            r=m-1;
        }

        else if(nums[m]<target){
            l=m+1;
        }
        else{
            return m;
        }
    }
    return -1;
}
int main(){
vector <int> hello={1, 4, 56, 32, 33};
int target=33;
int nums=binarySearch(hello, target);
cout<< nums;
return nums;
}