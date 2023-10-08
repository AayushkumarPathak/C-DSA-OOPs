#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s1;
/*
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        s1.push(val);
    }*/

    s1.push(10);
    s1.push(11);
    s1.push(12);
    s1.push(13);
    s1.push(14);
    s1.push(15);
    
    cout<<"Top Element: "<<s1.top()<<endl;

    cout<<"Size of Stack: "<<s1.size()<<endl;

    cout<<"Empty or Not: "<<s1.empty()<<endl;

    stack<int> s2;

    s2.push(20);
    s2.push(21);
    s2.push(22);
    s2.push(23);
    
    //swaping two stack
    // s1.swap(s2);


    //inserting at top
    // s1.emplace(16);

    // traversing
    cout<<"After s1:";
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;

    // cout<<"After s2:";
    //  while(!s2.empty()){
    //     cout<<s2.top()<<" ";
    //     s2.pop();
    // }


    
    return 0;
}