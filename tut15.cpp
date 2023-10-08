//Product of two numbers using function prototyping;
#include <iostream>
using namespace std;

int pro(int a,int b); //prototyping
void g();
int main(){
    int num1,num2;
    cout<<"Enter the value of Num1"<<endl;
    cin>>num1;
    cout<<"Enter the value of Num2"<<endl;
    cin>>num2;
    cout<<"The Product of numbers is:"<<pro(num1,num2);
    g();
    return 0;
}
int pro(int a, int b){
    int product=a*b;
    return product;

}
void g(){
    cout<<"\nThankyou for using the System";
}