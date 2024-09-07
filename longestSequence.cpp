#include <vector>
#include <iostream>
// #include <unordered_map>
#include <unordered_map>

using namespace std;

int longestSequnce(vector<int> &nums){
unordered_map<int, int> umap;
        for(int i=0; i<nums.size(); i++){
            umap[nums[i]]=i;
        }
    int max=0;
        for(int i=0; i<nums.size(); i++){
            int count=0;
            if(umap.find(nums[i]-1)==umap.end()){
                int j=0;
                while(umap.find(nums[i]+j)!=umap.end()){
                    count++;
                    j++;
                    if(count>max){
                        max=count;
                    }
                }
            }
            else{
                continue;
            }
        }
        return max;

}
int main(){
    
}