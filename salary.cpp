#include<iostream>
using namespace std;
int main()
{
    int sal,ta,da,hra;
    int gross_sal;
    cout<<"Enter Your Salary:";
    cin>>sal;
    if (sal<=10000){
        ta=(sal*5)/100;
        cin>>ta;
        da=(sal*5)/100;
        cin>>da;
        hra=(sal*5)/100;
        cin>>hra;
        }
    else if(sal>10000 and sal<=20000){
        ta=(sal*8)/100;
        cin>>ta;
        da=(sal*8)/100;
        cin>>da;
        hra=(sal*8)/100;
        cin>>hra;
        
      }
    else if(sal>20000 and sal<=30000){
        ta=(sal*11)/100;
        cin>>ta;
        da=(sal*11)/100;
        cin>>da;
        hra=(sal*11)/100;
        cin>>hra;
      }
    else{
        ta=(sal*15)/100;
        cin>>ta;
        da=(sal*15)/100;
        cin>>da;
        hra=(sal*15)/100;
        cin>>hra;
        
        gross_sal=ta+da+hra+sal;
        cin>>gross_sal;
        cout<<"Your's Final salary:"<<gross_sal;
      }
    return 0;
}

      
      
    
      



      
        

    