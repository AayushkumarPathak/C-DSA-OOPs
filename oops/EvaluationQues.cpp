#include<iostream>
using namespace std;

class Evaluation{
    public:
    int roll;
    int maths;
    int phy;
    int chem;
    
    int per;

    void getDetails(){
        cout<<"Enter roll:";
        cin>>roll;

        cout<<"Enter maths marks:";
        cin>>maths;

        cout<<"Enter physics marks:";
        cin>>phy;

        cout<<"Enter chemistry marks:";
        cin>>chem;
        
    }
    
    void percentage(){
        per = (maths+phy+chem)/3;
        
    }
    void printDetails(){
        cout<<"%:"<<per<<endl;
        if(per>=90){
            cout<<"A"<<endl;

        }
        else if(per>=80 && per<90){
            cout<<"B"<<endl;
        }
        else if(per>=70 && per<80){
            cout<<"C"<<endl;
        }
        cout<<"roll is:"<<roll<<endl;
    }

};

int main()
{
    Evaluation e1;
    e1.getDetails();
    e1.percentage();
    e1.printDetails();

}