#include<iostream>
using namespace std;

int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        n*fact(n-1);
    }
}
int main(){
    
    int n;
    cout<<"Enter the number to find the factorial";
    cin>>n;
    cout<<"Factorial of number "<<n<<" is: "<<fact(n);
    


}