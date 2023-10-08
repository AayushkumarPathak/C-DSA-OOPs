#include<iostream>
using namespace std;

void conquer(int arr[],int si,int mid,int ei){
    int arrCpy[ei-si+1];

    int idx1 = si;
    int idx2 = mid+1;
    int x = 0;

    while(idx1<=mid && idx2<=ei){
        if(arr[idx1]<arr[idx2]){
            arrCpy[x++] = arr[idx1++];
        }
        else{
            arrCpy[x++] = arr[idx2++];
        }

    } 
    while(idx1<=mid){
        arrCpy[x++] = arr[idx1++];
    }
    while(idx2<=ei){
        arrCpy[x++] = arr[idx2++];
    }

    for(int i=0;i<(ei-si+1);i++){
       arr[si + i] = arrCpy[i];
    }
}


void divide(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
    int mid = si+(ei-si)/2;

    divide(arr,si,mid);
    divide(arr,mid+1,ei);

    conquer(arr,si,mid,ei);
}

int main(){
    int arr[] = {6,3,9,5,2,8};

    int n = sizeof(arr)/sizeof(arr[0]);

    divide(arr,0,n-1);
    cout<<"Sorted using Merge sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    
    return 0;
}