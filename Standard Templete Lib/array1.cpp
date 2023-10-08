#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[3] = {1,2,3};

    array<int,4> a ={1,2,3,4}; 
    int len = a.size();

    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Element at 2: "<<a.at(2)<<endl;
    cout<<"Empty or not: "<<a.empty()<<endl; //empty true or false

    cout<<"first element: "<<a.front()<<endl; //first element
    cout<<"Last element: "<<a.back()<<endl; //last element
    

    return 0;
}