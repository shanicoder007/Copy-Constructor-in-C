#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {

        a = 5;
    }

    Number(int num)
    {

        a = num;
    }

    Number(Number &obj)
    {

        cout << "Copy Constructur Called : " << &obj << endl;
        a = obj.a;
    }
    void display()
    {

        cout << "The Number for this object :  " << a << endl;
    }
};

int main()
{
    Number x, y, z(6);
    x.display();

    y.display();

    z.display();

    Number z1(x); // copy constructor invoked
    z1.display();

    Number z3(x); // copy constructor invoked .kiy kay hum nay object ko isi line main assign kar dia

    return 0;
}