#include<iostream>
using namespace std;

void update(int arr[],int n){
    arr[0] = 10;
    cout<<"fun: "<<endl;
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<"->";
    }
    cout<<endl;
}
//when we pass array to fun first base address is passed not copy of array is p
// passed . be carefull while updating the array.
int main(){
    int arr[3] = {1,2,3};
    int n = 3;
    cout<<"main: "<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"->";
    }
    cout<<endl;
    update(arr,n);
    cout<<"mainAgain: "<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"->";
    }
    cout<<endl;
    return 0;
}