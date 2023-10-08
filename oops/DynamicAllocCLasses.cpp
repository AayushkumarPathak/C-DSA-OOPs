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


};



int main(){
    Hero obj1;

    // obj1.sethealth();
    // obj1.setLevel();

    // cout<<obj1.getHealth()<<endl;
    // cout<<obj1.getLevel();

    Hero *h = new Hero;
    h->sethealth();
    h->setLevel();

    cout<<h->getHealth()<<endl;
    cout<<h->getLevel();
    return 0;
}