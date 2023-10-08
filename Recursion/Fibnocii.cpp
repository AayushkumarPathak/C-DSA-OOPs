#include<iostream>
using namespace std;

void fib(int a, int b, int n){
    if(n==0){
        return;
    }
    int c = a+b;
    cout<<c<<" ";
    fib(b,c,n-1);

}

int main()
{
    int a = 0;
    int b = 1;
    int n = 7;

    cout<<"Your Fibonacii series is:"<<endl;
    cout<<a<<" "<<b<<" ";

    fib(a,b,n-2);
}