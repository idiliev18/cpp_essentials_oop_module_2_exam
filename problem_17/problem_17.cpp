#include <iostream>
using namespace std;

class X {
private:
    int v;
};

class Y : public X {
    Y() :v(0) {}
};

int main()
{
    Y y;
    cout << y.v;
    return 0;
}

// Answer: Compilation fails
