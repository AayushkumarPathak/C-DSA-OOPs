#include<iostream>
using namespace std;
//HOMEWORK (PRINT ALL THE SUM OF ELEMENTS OF AN ARRAY)

int main(){
    int size;
    cout<<"Enter the size: ";
    cin>>size;

    int arr[50];

    for(int i=0;i<size;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
    }
    cout<<"Sum of all elements are:"<<sum<<endl;

}