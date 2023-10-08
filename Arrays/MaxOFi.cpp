#include<iostream>
using namespace std;
int main()
{
    int mx = -19999999;
    int n;
    cout<<"Enter the length:";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        mx = max(mx,arr[i]);
    }
    cout<<mx<<endl;
    return 0;
}