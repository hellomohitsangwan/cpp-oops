#include<iostream>
using namespace std;
class A{
    public:
    void Afunc() {
        cout<<"a function";
    }
};
class B : public A {
    //the public keyword here means that class B inherits publically the public and protected data member and fucntion of class A
};

int main() {
    B b;
    b.Afunc();
    return 0;
}