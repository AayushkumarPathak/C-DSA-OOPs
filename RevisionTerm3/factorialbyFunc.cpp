#include<iostream>
using namespace std;
void fact(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<"Factorial of "<<n<<" is: "<<fact;

    
}
int main(){
    int n;
    cout<<"Enter the number to find the factorial:";
    cin>>n;
    fact(n);




}