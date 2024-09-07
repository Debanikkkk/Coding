#include <iostream>
#include <unordered_map>

using namespace std;
int main(){
    unordered_map<string, int> umap;

    umap["Apple"]=10;
    umap["strawberyy"]=20;
    umap["mr desanta"]=30;

    for(auto i: umap){
        cout<< i.first << " has " << i.second<< endl;
    }

cout<< umap["Apple"];
umap["Apple"]=20;
cout<< umap["Apple"];
    return 0;
}