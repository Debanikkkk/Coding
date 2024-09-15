#include <iostream>
#include <vector>
using namespace std;

    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> result(nums.size());
        for(int i=0; i<nums.size(); i++){
             result[i]=1;
            for(int j=0; j<nums.size(); j++){
                   

                if(i==j){
                    continue;
                }
                else{
                result[i]*=nums[j];
                }
            }

        }
        return result;
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

