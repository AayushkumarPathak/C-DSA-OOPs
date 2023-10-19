#include <iostream>
using namespace std;

class Demo
{
    int x, y;
    static int z;

public:
    void getData(int a, int b)
    {
        x = a;
        y = b;
        z = z + 1;
    }
    void putData()
    {
        cout << "x: " << x << "\ty: " << y << "\tz: " <<z<< endl;
    }
};
int Demo::z;

int main()
{
    Demo obj1, obj2;

    obj1.getData(10, 12);
    obj2.getData(20,22);
    
    obj1.putData();
    obj2.putData();
}