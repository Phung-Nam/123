#include <iostream>

using namespace std;


class MyClass
{

public:
    MyClass* func()
    {

        cout <<"\nfunc";
        return this;
    }
    MyClass* func1()
    {

        cout <<"\nfunc1";
         return this;
    }
    MyClass* func2()
    {
        cout <<"\nfunc2";
        return this;
    }

};

asdasdasdasdasdasdasdas
int main()
{
    MyClass my;
    my.func()->func1()->func2()->func()->func1();
    cout << "Hello World!" << endl;
    return 0;
}
