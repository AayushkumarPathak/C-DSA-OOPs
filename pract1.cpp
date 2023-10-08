#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"You are not eligible for voting"<<endl;
    }
    else if(age==18){
        cout<<"Prepare voter card for voting"<<endl;

    }
    else if(age<1){
        cout<<"You are not yet born"<<endl;
        
    }
    else{
        cout<<"You can Vote"<<endl;
    }
    return 0;
}


