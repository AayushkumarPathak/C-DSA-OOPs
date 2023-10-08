#include<iostream>
#include<vector>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    vector<int> v;
    // int ele;
    for(int i=0;i<5;i++){
        // cin>>ele;
        v.push_back(i);
    }
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Memory space: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Max_size: "<<v.max_size()<<endl;
    if(v.empty() == false){
        cout<<"Vector is not empty."<<endl;
    }
    else{
        cout<<"Vector is empty."<<endl;
    }
    cout<<"Pointer memeory to array: "<<v.data()<<endl;

    v.assign(0,10);
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;


    
    return 0;
}