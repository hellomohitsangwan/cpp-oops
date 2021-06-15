#include<iostream>
using namespace std;

// syntax
// template<class t1 , class t2>
//code 

template<class T1 , class T2>
class myClass {
    public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b) {
        data1 = a;
        data2 = b;
    }
    void display() {
        cout<<this->data1<<endl<<this->data2<<endl;
    }
};

int main() {
    myClass <int , char> obj(8 , 'm');   //always use char in single quotes
    obj.display();
    return 0;
}