#include<iostream>
using namespace std;

class Complex {
    private:
        int real , imag;
        public:
            Complex(int r = 0 , int i = 0) {
                real = r;
                imag = i;
            }
            Complex operator + (Complex &obj) {
                Complex result;
                result.real = real + obj.real;
                result.imag = imag + obj.imag;
                return result;
            }
            void display() {
                cout<<real<<" + i"<<imag;
            }
}; 
int main() {
    Complex c1(2 , 3);
    Complex c2(4 , 6);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}