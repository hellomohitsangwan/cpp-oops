#include<iostream>
using namespace std;

class complex {
    public:
    int real , complex ;
    void setData(int r , int c) {
        real = r;
        complex = c;
    }
    void getData() {
        cout<<real<<" "<<complex;
    }
};

int main() {
    complex c; // simple method of declaring object
    c.setData(2, 3);


    complex *ptr = &c;  //throung pointer making object
    (*ptr).setData(3 , 4);
    //or use the arror operator if u don't want to use the star(*) for defrencing a pointer everytime
    ptr->setData(3 , 4);


    complex *ptrd = new complex;  //using dynamic memory allocation 
    (*ptrd).setData(5 ,6);

    

}