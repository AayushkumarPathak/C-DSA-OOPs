#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(vector<int> &v1){
    for(int i:v1){
        cout<<i<<" ";

    }
    cout<<endl;
}

int main(){
    // vector<int> v;
    // int n;
    // cout<<"Enter size: ";
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cout<<"Enter ele: ";
    //     int ele;
    //     cin>>ele;
    //     v.push_back(ele);
    // }

    // make_heap(v.begin(),v.end());
    // cout<<"The max ele of heap is: ";
    // cout<<v.front()<<endl;

    vector<int> v1 = {20,30,40,10};
    make_heap(v1.begin(),v1.end());
    cout<<"Initial heap: ";
    print(v1);

    v1.push_back(50);
    cout << "Heap just after push_back(): ";
    print(v1);
    push_heap(v1.begin(), v1.end());
    cout << "Heap after push_heap(): ";
    print(v1);

    return 0;
}
