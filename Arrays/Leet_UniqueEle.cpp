#include<iostream>
using namespace std;

int unique(int arr[], int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int num[] = {2,3,1,6,3,6,2};
    int n = sizeof(num)/sizeof(num[0]);
    
    cout<<"Unique element in array is: "<<unique(num,n)<<endl;
    
    
    
    return 0;
}