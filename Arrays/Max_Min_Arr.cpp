
#include<iostream>
using namespace std;

int getMax(int num[],int n){
    int max = INT16_MIN;

    for(int i=0;i<n;i++){
        if(num[i]>max){
            max = num[i];
        }
    }
    return max;
}
int getMin(int num[],int n){
    int min = INT16_MAX;

    for(int i=0;i<n;i++){
        if(num[i]<min){
            min = num[i];
        }
    }
    return min;
}


int main()
{
    int size;
    cout<<"Enter the size:";
    cin>>size;

    int num[100];

    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"Maximum value in num[] is: "<<getMax(num,size)<<endl;
    cout<<"Minimum value in num[] is: "<<getMin(num,size)<<endl;

    
    

   return 0;
}