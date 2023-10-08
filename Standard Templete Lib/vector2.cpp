#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr(5,1); //default assign with 0
    for(int i:arr){
        cout<<i<<" ";
    }cout<<endl;
    //copying arr
    vector<int> arr2(arr);
    for(int i:arr2){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}