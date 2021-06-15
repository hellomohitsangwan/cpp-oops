#include<iostream>
using namespace std;

// syntax
// template<class t1 , class t2>
//code 

template<class T1 = int , class T2 = char>
class myClass {
    public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b) {
        data1 = a;
        data2 = b;
    }
    void display() {
        cout<<data1<<endl<<data2<<endl;
    }
};

int main() {
    myClass <> obj(8 , 'm');   //default int and char are used if we don't specify any type in  parameters(anglar brackets)
    obj.display();
    myClass <float , string> obj2(8.4 , "mohit");
    obj2.display();
    return 0;
}