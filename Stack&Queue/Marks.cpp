#include<iostream>
using namespace std;

class Marks{
    private:
    int top;
    int *arr;
    int len;

    public:

    Marks(int len){
        this->len = len;
        arr = new int[len];
        top = -1;
    }

    void push(int val){
        if(len - top > 1){
            top++;
            arr[top] = val;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
           
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }


    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
    }

    bool isempty(){
        if(top == -1){
            return true;
        }
        return false;
    }
};

int main(){
    Marks st(4);

    st.push(92);
    st.push(84);
    st.push(66);
    st.push(72);

    while(!st.isempty()){
        cout<<st.peek()<<"<-";
        st.pop();
    }


    return 0;
}