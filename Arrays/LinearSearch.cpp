#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;

    int arr[50];

    for(int i=0;i<n;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element to search: ";
    cin>>x;

    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"Element found! At: "<<i<<"4th index"<<endl;
        }
    }
    //TIME COMPLEXITY O(n)
    return 0;
}