#include <iostream>
using namespace std;

template<class T>
T add(T a , T b) {
    return a+b;
}
int main() {
    cout<<add<int>(3 , 4)<<endl;
    cout<<add<float>(3.2 , 4.8)<<endl;
}