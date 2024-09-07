#include <iostream>
#include <vector>

// #include <>
using namespace std;

void bubbleSort(vector<int> &arr){
  for(int j=0; j< arr.size()-1; j++){ 
    int count=0;
    for(int i=0; i<arr.size()-1; i++){
         int temp;
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
          else{
            count++;
            continue;
        }
    }
       if(count==arr.size()-1){
            break;
        }
      
}
}


void selectionSort(vector<int> &arr){
    for(int i=0; i<arr.size()-1; i++){
        int min=arr[i];
        int temp;
        int tempv;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j]<min){
            temp=arr[j];
            arr[j]=min;
            min=temp;
            }
            else{
                continue;
            }
        }

         
    }
}
int main(){
    vector<int> arr;
   arr.push_back(45);
    arr.push_back(67);
    arr.push_back(23);
    arr.push_back(89);
    arr.push_back(12);
    arr.push_back(34);

    for(auto i: arr){
        cout<<i<<", ";
    }

    bubbleSort(arr);

    cout<<endl<<"after bubble sort: "<<endl;

     for(auto i: arr){
        cout<<i<<", ";
    }
}