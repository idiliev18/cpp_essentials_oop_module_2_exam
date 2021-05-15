#include <iostream>
using namespace std;

class X {
public:
    void shout() { cout << "X"; }
};

class Y : public X {
    void shout() { cout << "Y"; }
};

int main()
{
    X* x = new Y();
    static_cast<Y*>(x)->shout();
}

// Answer: Compilation fails
