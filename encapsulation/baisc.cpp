#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class car {
    public:
    int a;
    void funcA() {
        cout<<"funcA"<<endl;
    }
    private:
    int b;
    void funcB() { 
        cout<<"funcB"<<endl;
    }
    protected:
    int c;
    void funcC() {
        cout<<"funcC"<<endl;
    }
};

int main() {
    car c1;

    c1.funcA();
    // c1.funcB();  //it is private so we can't see the fucnB()
    // c1.funcC();  //it is protected so we also can't see it outside the class but its chldren can see it
};
