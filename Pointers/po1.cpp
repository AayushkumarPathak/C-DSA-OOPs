#include<iostream>
using namespace std;

int main()
{
    //pointers1
    int a = 5;
    int *ptr;


    cout<<"value of a: "<<a<<endl;

    cout<<"Address of a:"<<int(&a)<<endl;

    cout<<"Value of a using ptr: "<<*ptr<<endl;

    cout<<"Address of a using ptr: "<<(int)ptr<<endl;

    *ptr++;
    cout<<a;
    


    return 0;
}