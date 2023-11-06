#include<iostream>
using namespace std;

int main()
{
    int *arr;
    
    int n;
    cout<<"Enter the size: ";
    cin>>n;

    arr = new int[100];
    if(arr==NULL){
        cout<<"Allocation failed"<<endl;
        exit(1);
    }
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>*(arr+i);
    }

    cout<<"Array elements are: ";
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
    delete[] arr;
    cout<<"Memory deallocated"<<endl;
    return 0;
}