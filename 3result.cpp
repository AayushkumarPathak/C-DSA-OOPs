#include<iostream>
using namespace std;
int main()
{
    int eng,mat,chem,total;
    float perc;
    cout<<"Enter the marks in English:";
    cin>>eng;
    cout<<"Enter the marks in Maths:";
    cin>>mat;
    cout<<"Enter the marks in Chemistry:";
    cin>>chem;
    total=(eng+mat+chem);
    cout<<"Total marks"<<total<<endl;
    perc=(total/3);
    cout<<"Percentage Obtained"<<perc;















    return 0;
}