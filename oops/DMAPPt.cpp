#include<iostream>
using namespace std;
//simple interest using dma
int main(){
    int *p;
    int *r;
    int *t;
    int *si;

    p = new int;
    r = new int;
    t = new int;
    si = new int;

    if(p==NULL && r==NULL && t==NULL && si==NULL){
        cout<<"Allocation failed";
        exit(1);
    }
    cout<<"Enter principle amount:";
    cin>>*p;

    cout<<"Enter rate: ";
    cin>>*r;

    cout<<"Enter time: ";
    cin>>*t;

    *si = (0.01)*(*p)*(*r)*(*t);
    cout<<"Simple interest: "<<*si<<endl;

    delete p;
    delete r;
    delete t;
    delete si;
    return 0;
}