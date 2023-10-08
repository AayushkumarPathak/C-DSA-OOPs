#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of array:";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element at arr"<<endl;
        cin>>arr[i];

    }
    

    int x;
    cout<<"Enter the element to search:";
    cin>>x;

    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"Element found:";
            break;
        }
        else{
            cout<<"Element not found";
            break;
        }
    }
    

}