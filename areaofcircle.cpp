#include<iostream>
using namespace std;

//Fuction to calculate area of circle(Backend)
int circle(int r){
    int area=3.14*r*r;
    return area;
}
//Function to calculate area of rectangle(Backend)
int rect(int l,int b){
    int area=l*b;
    return area;
}
// ___main__ fn For User! (Frontend)
int main(){
    int r;
    cout<<"Enter the radius of circle:";
    cin>>r;
    cout<<"Area of circle is:"<<circle(r)<<endl;
    
    int l,b;
    cout<<"Enter the length of rectangle:";
    cin>>l;
    cout<<"Enter the Breadth of rectangle:";
    cin>>b;
    cout<<"Area of rectangle is:"<<rect(l,b);
    return 0;
}