#include<iostream>
using namespace std;

class Student{

    int age;
    char name[100];
};
class Hero{

    
};

int main()
{
    Student s1;
    cout<<"size is: "<<sizeof(s1)<<" bytes"<<endl; 

    Hero h1;
    cout<<"size is: "<<sizeof(h1)<<" bytes"<<endl; //empty class has 1 bytes of memory is allocated.




    return 0;

}