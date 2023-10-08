#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int emp_id;
    Employee(string name,int emp_id){
        this->name = name;
        this->emp_id = emp_id;
    }
};

int main(){
    Employee emp = Employee("Akash",631);

    // emp.name = "Aayush";
    // emp.emp_id = 1221;
    cout<<emp.name<<endl;
    cout<<emp.emp_id; 

}