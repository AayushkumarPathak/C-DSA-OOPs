#include<iostream>
using namespace std;

int countDuplicates(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<"Enter the element at["<<i<<"] : ";
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element x to count:";
    cin>>x;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter the length of array:";
    cin>>n;

    int arr[n];

    int ans = countDuplicates(arr,n);
    cout<<"Element occurs: "<<ans;

    
}