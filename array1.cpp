#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the length of array:";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter element:";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<endl;
        // cout<<"\n";
    }
}