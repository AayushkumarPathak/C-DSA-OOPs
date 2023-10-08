#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);
    for(int i=0;i<6;i++){
        v.push_back(i);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // v.assign(6,10);
    // cout<<"Vector elements: "<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    v.insert(v.begin(),5);
    
    cout<<"Vector elements: "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    cout<<endl;



    return 0;
}