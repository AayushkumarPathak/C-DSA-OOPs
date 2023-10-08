#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    // cout<<"Size: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size: "<<v.capacity()<<endl;

    v.push_back(2);
    v.push_back(3);
    cout<<"Size: "<<v.capacity()<<endl;
    cout<<"length: "<<v.size()<<endl;

    cout<<"Element at 2: "<<v.at(2)<<endl;
    cout<<"front: "<<v.front()<<endl;
    cout<<"Back: "<<v.back()<<endl;

    cout<<"Before pop:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();
    cout<<"After pop:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //clear
    //size = 0 not capacity - memeory
    cout<<"Before size:"<<v.size()<<endl;
    v.clear();
    cout<<"After size:"<<v.size()<<endl;

    //iterator
    
    






    return 0;
}