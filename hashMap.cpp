#include <iostream>
#include <unordered_map>
#include <unordered_set>
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

unordered_set<string> hello;
hello.insert("updog");
hello.insert("what is" );



for(auto c: hello){
    cout<<c<<endl;
}
    return 0;
}