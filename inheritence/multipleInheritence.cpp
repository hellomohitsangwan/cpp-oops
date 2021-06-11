#include<iostream>
using namespace std;
class A{
    public:
    void Afunc() {
        cout<<"a function";
    }
};
class B{
    public :
    void Bfunc() {
        cout<<"b function";
    }
};
class C : public A , public B {

};
int main() {
    C c;
    c.Afunc();
    return 0;
}