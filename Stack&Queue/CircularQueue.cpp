#include<iostream>
using namespace std;

class CircularQueue{
    private:
    int *arr;
    int front;
    int rear;
    int size;

    public:
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool isEmpty(){
        if(front == -1){
            return true;
        }
        return false;
    }

    void enqueue(int val){
        if((front == 0 && rear == size-1) || (rear == (front - 1 + size) % size)){
            cout<<"Queue Overflow."<<endl;

        }
        // else if(front == -1){
        //     cout<<"Queue Underflow."<<endl;
        // }
        else if(rear == size-1 && front!=0){
            rear = 0;
            
        }
        else{
            rear = (rear+1) % size;
            
        }
        arr[rear] = val;
    }
    int dequeue(){
        if(front == -1){
            cout<<"Queue is empty."<<endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;

        if(front == rear){
            front = rear = -1;
        }
        else if(front == size-1){
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }

    void printS(){
        while(!isEmpty()){
            cout<<arr[front]<<" ";
            dequeue();
        }
    }
};

int main(){
    int n;
    cin>>n;
    CircularQueue cq(n);
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        cq.enqueue(val);
    }
    
    cq.printS();
    
    
}
