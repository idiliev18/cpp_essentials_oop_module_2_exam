#include <iostream>
using namespace std;

class X {
public:
    void shout() { cout << "X"; }
};
class Y :public X {
};
class Z : public Y {
public:
    void shout() { cout << "Z"; }
};

int main()
{
    Z* z = new Z();
    static_cast<Y*>(z)->shout();
}

// Answer: X