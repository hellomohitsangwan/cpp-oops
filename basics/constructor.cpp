
#include<iostream>
using namespace std;

class student {
    public:
    string name;
    int age;

    //default counstructor (w/o pasing any parameter in the constructor)
    student() {
        cout<<endl<<"i am s default constructor";
    }

    // making a parameterized constructor
    student(string n , int a) {
        cout<<"i am parameterised constructor";
        name = n;
        age = a;
    }
    // default copy constructor
    student(student &a) {
        cout<<"default copy constructor";
        name = a.name;
        age = a.age;
    }

    void getInfo() {
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age;
    }

    //destructor call hote hai jb koi object destroy hota hai(object apne ap destroy ho jata hia meian methok (bec. hamne ussi me banaye hota hai object) k baad)
    ~student() {
        cout<<endl<<"deconstructor called"<<endl;
        //ye 4baar call hoga kyunmi hamne 4 objects banaye hai
    }    

    // operator overloading (read line 61)
    bool operator == (student &d) {

       //ye first vala name hamara jo bhi dusra object hoga uska hoga 
        if(this->name == d.name && age == d.age) {    //name and this->name is similar
            return 1;
        }
        return 0;
    }
};

int main() {
    student a("mohit" , 20);  //parameterised constructor
    // a.getInfo();                                                             
    student b;  //this is the default constructor

    //copy constructor(kisi aur object k sari values us namye constructor me copy ho jayege)
    student c(a);   //method 1 for copy constructor
    student d = a;  //method 2 for copy constructor

    if(c == d) {    //hame define bhi krna padegfa k ham is "==" operator se kya except krte hai,islie ham 
        cout<<endl<<"  same";
    }
    else{
        cout<<"not same";
    }
}