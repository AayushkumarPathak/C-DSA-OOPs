#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    //[1,2,3,4,5,6]
    int arr[50];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i+=2){
        int sum = 0;
        sum = arr[i] + arr[i+1];
        cout<<sum<<" ";
    }

    return 0;
}