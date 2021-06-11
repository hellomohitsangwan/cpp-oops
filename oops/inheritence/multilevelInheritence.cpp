#include<iostream>
using namespace std;
class A{
    public:
    void Afunc() {
        cout<<"a function";
    }
};
class B : public A{
    public :
    void Bfunc() {
        cout<<"b function";
    }
};
class C : public B {

};
int main() {
    C c;
    c.Afunc();
    c.Bfunc();
    return 0;
}