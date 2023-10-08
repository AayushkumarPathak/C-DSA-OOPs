#include<iostream>
using namespace std;

class Student{
    private:
    int Regno;
    char name[100];

    public:
    void getDetails(){
        cout<<"Enter Registration no: ";
        cin>>Regno;
        cout<<"Enter name:";
        cin>>name;
    }
    void putDetails(){
        cout<<"Your Registration No. is: "<<Regno<<endl;
        cout<<"Your Name is: "<<name<<endl;
    }

};

int main()
{
    Student s1;
    s1.getDetails();
    s1.putDetails();

    return 0;

}