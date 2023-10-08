#include<iostream>
using namespace std;

int duplicates(int arr[], int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
       
    }
    for(int i=0;i<n;i++){
        ans = ans^i;
    }
    return ans;
    
}

int main(){
    int arr[] = {4,2,1,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"The number more than Once is: "<<duplicates(arr,n);



    
    return 0;
}