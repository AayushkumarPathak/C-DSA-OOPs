#include<iostream>
using namespace std;

void getValues(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<"Enter the element:";
        cin>>arr[i];
    }
}
void putValues(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"Element at:["<<i<<"] is: "<<arr[i]<<endl;
    }
}
void length(int arr[],int n){
    int len = (4*n)/4;
    cout<<"Length of array is:"<<len<<endl;
}
void getCharArr(char ch[],int n){
    for(int i=0;i<n;i++){
        cout<<"Enter the char val: ";
        cin>>ch[i];
    }
}
void putCharArr(char ch[],int n){
    for(int i=0;i<n;i++){
        cout<<"Char array Element at:["<<i<<"] is: "<<ch[i]<<endl;
        
    }
}

int main(){
    int n;
    cout<<"Enter the length: ";
    cin>>n;

    int arr[n];

    getValues(arr,n);
    putValues(arr,n);

    length(arr,n);

    char ch[n];
    getCharArr(ch,n);
    putCharArr(ch,n);
    

    return 0;
}