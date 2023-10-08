#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year you want\nYou want to check Leap Year:";
    cin>>year;
    if (year%4==0){
        cout<<"This Is a leap Year(:";
    }
    else{
        cout<<"This is not leap Year :(";
    }




    return 0;
}