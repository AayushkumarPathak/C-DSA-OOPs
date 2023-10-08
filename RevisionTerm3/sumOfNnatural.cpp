#include<iostream>
#include<math.h>

using namespace std;
int output(int n,int sum);
int main(){
     int n;
     cout<<"Enter the number n:'n>=1'::";
     cin>>n; 
     int sum = 0;
     int call = output(n,sum);
     cout<<"The sum of series '(n)+(n-2)+(n-4)+(n-6)...(n>=0)':"<<call;

}
//(n)+(n-2)+(n-4)+(n-6)...(n>=0);
int output(int n,int sum){
    for(int i=n;i>=1;i=i-2){
        
        sum = sum+i;

    }
    return sum;


}