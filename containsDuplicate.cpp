#include <unordered_map>
#include <iostream>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> umap;
      for(int i=0; i<nums.size(); i++){
        umap[i]=nums[i];
        }

        for(int i=0;i<nums.size(); i++){
        if(umap.find(i)!=umap.end()){
            return true;
        }
        else {
            return false;
        }
      }
      return {};
    }

    int main(){
        
    }