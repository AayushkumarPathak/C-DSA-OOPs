#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter length:";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element at:";
        cin>>arr[i];
    }
    //bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
           if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
           } 
        }
    }
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        
        cout<<arr[i];
        cout<<"\t";
    }
}