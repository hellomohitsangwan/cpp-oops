#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class student {
    int password;

    public:  //we need to do it public because by default it is private,jo hbi iske niche hoga vo public me hojayega
    string name;
    int age;
    bool gender;

    void printInfo() {
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"gender = "<<gender<<endl;
        cout<<"password = ";
        getPassword();
        // cout<<endl;
    }
    void setPassword(int p) {
        password = p;
    }
    void getPassword() {
        cout<<password;
    }
};

int main() {
    // method 1 (with naming the the student)
    student a;
    a.name = "mohit";
    a.age = 20;
    a.gender = 1;
    // a.password = 1234   //it is a worng way we can't do it because the password field is not visible as it is private by-default, we use getter and setters
    a.setPassword(1234);
    a.getPassword();
    cout<<endl;


    // method 2 (storing the objects in array)
    student b[2];
    for (int i = 0; i < 2; i++)
    {
        // cout<<"name ";
        cin>>b[i].name;
        // cout<<"age ";
        cin>>b[i].age;
        // cout<<"gender ";
        cin>>b[i].gender;
        int p; cin>>p;
        b[i].setPassword(p);
    }
    for(int i = 0 ; i < 2; i++) {
        b[i].printInfo();
    }
}