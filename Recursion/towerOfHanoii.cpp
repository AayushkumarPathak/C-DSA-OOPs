#include<iostream>
using namespace std;

void tower(int n,string src,string helper,string dest){
    if(n==1){
        cout<<"transfer disk "<<n<<" from "<<src<<" to "<<dest<<endl;
        return;
    }
    
    tower(n-1,src,dest,helper);
    cout<<"transfer disk "<<n<<" from "<<src<<" to "<<dest<<endl;
    tower(n-1,helper,src,dest);
}


int main(){
    int n = 3;
    tower(n,"src","helper","dest");

    return 0;
}