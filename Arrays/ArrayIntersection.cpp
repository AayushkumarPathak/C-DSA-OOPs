#include<iostream>
using namespace std;

void intersection(int arr1[],int arr2[],int n,int m){
    for(int i=0;i<n;i++){
        int ele = arr1[i];
        for(int j=0;j<m;j++){
            if(ele == arr2[j]){
                cout<<"Intersection of arr1 and arr2 is: "<<ele<<" ";
                arr2[j] = INT16_MIN;
                break;
            }
        }
    }
}

int main(){
    int arr1[] = {1,2,3};
    int n = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[] = {3,4};
    int m = sizeof(arr2)/sizeof(arr2[0]);

    intersection(arr1,arr2,n,m);



    
    return 0;
}