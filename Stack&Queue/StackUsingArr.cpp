#include<iostream>
using namespace std;


void push(int arr[],int n){
    int val;
    cout<<"Enter val to push: ";
    cin>>val;
    if(n == 0){
        arr[0] = val;
        return;
    }
    
}


int main(){
    int arr[100];
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    
    push(arr,n);
    return 0;
}