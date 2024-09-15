#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;



    vector<int> productExceptSelf(vector<int>& nums) {
    unordered_map<int, int> umap;
    vector<int> result;
    for(int i=0; i<nums.size(); i++){
        umap[nums[i]]=i;
    }        

    for(int i=0; i<nums.size(); i++){
        nums[i]*=
        result.push_back(nums[i]);
    }        
    // for(auto it: umap){

    // }
    }
int main(){
vector<int> arr={1, 2, 3, 4};
for(int i=0; i<arr.size(); i++){
    cout<< arr[i]<<", ";
}
cout<<endl;
vector <int> result=productExceptSelf(arr);
for(int i=0; i<result.size(); i++){
    cout<< result[i]<<", ";
}
}

