#include <iostream>
using namespace std;
int is_perfect(int num, int sum);   

int main(){
    int sum=0;
    int num;
    cout<<"Enter the num:";
    cin>>num;
    is_perfect(num,sum);
     
    return 0;


}

int is_perfect(int num,int sum){
    for(int i=1;i<<num;i++){
        if (num%i==0){
            sum=sum+i;
        }
    }
        if (sum==num){
            cout<<"This is perfect number";
        }
        else{
            cout<<"This is not perfect number";

        }

    return 0;
        
    
}

