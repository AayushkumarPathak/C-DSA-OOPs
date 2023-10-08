#include<iostream>
using namespace std;

class Hero{
    int health;

    public:
    char level;

    void sethealth(){
        cin>>health;
    }
    void setLevel(){
        cin>>level;
    }

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level; 
    }
    Hero(){
        cout<<"Constructor called."<<endl;
    }


};



int main(){
    //statically
    Hero h1;

    //dynamically
    Hero *h2;

    return 0;
}