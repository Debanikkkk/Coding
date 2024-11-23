 #include <iostream>
 #include <vector>
using namespace std;
 
 void rotate(vector<int>& nums, int k) {
        int i=0;
        int n=nums.size();
        while(i<k){
            for(int j=n-1; j>0; j--){
                swap(nums[j], nums[j-1]);
            }
        }
 }
int main(){
    vector<int> numz={1, 2, 3, 4};
    int k=3;

      for(int i=0; i<numz.size(); i++){
        cout<<numz[i]<<", ";
    }
    rotate(numz, k);

    for(int i=0; i<numz.size(); i++){
        cout<<numz[i]<<", ";
    }
}