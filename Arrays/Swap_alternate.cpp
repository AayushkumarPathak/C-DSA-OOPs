#include<iostream>
using namespace std;

void swap_alter(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }

}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){
    int arr[] = {1,3,2,7,11,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    swap_alter(arr,n);
    printArr(arr,n);

    int brr[] = {1,5,4,8,10};
    swap_alter(brr,5);
    printArr(brr,5);
    
    
    return 0;
}