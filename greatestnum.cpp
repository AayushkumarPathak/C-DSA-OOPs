#include<iostream>
using namespace std;

//greatest Number among four Numbers
int main()
{
    int a,b,c,d;
    cout<<"Enter vale of|a|:"<<endl;
    cin>>a;
    cout<<"Enter vale of|b|:"<<endl;
    cin>>b;

    cout<<"Enter vale of|c|:"<<endl;
    cin>>c;

    cout<<"Enter vale of|d|:"<<endl;
    cin>>d;
    if (a>b and a>c and a>d){
        cout<<"|a| is greatest Number";
    }
    else if(b>a and b>c and b>d){
        cout<<"|b| is greatest Number";
    }
    else if(c>a and c>b and c>d){
        cout<<"|c| is greatest Number";

    }
    else if(d>a and d>b and d>c){
        cout<<"|d| is greatest number";
        }
    else{
        cout<<"Invalid Input:(";
    }

    return 0;
}