// ques - >
// Bugatti Car factory has four types of employees namely manager, engineer, auditor, and supervisors. The company has the following parameters to compute the salary of each employee.

// Manager: Basic(Rs30000),DA(100% of basic),HRA(50% from basic),Car allowance(Rs 2500 pm),Travelling allowance(15% of basic)
// Engineers: Basic(Rs 20000),DA(100% of basic),HRA( 30%of basic),Travelling allowance(5% of basic)
// Auditors: Basic(Rs 35000),DA(100% of basic),HRA(30 %of basic),LTA(10% of basic, mobile allowance(rs3000),car allowance  (Rs 2500)
// Supervisors: Basic(Rs 10000),DA(100%),HRA (25% of basic)
 

// Create four class manager, engineer, auditor, supervisor inherited from the employee class. Employee class contains member variables name, designation, basic_salary, and a method to display salary. Derived classes contain member functions to calculate salary.

 

// Input format:

// John

// Manager

 

// Output format:

// John

// Manager

// 82000


// sol. =>
#include <iostream>
using namespace std;

class employee {
    public:
    int basic_salary;
    string name , gender , designation;
    void put() {
        cout<<basic_salary;
    }
};
class manager : public employee{
    public:
    manager(string name , string des) {
        this->name = name;
        this->designation = des;
    }
    void put() {
        //basic_salary = ; //calculate salary
        cout<<name<<endl<<designation<<endl<<basic_salary<<endl;
    }
};
class engineer : public employee{
    public:
        engineer(string name , string des) {
        this->name = name;
        this->designation = des;
    }
    void put() {
        //basic_salary = ; //calculate salary
        cout<<name<<endl<<designation<<endl<<basic_salary<<endl;
    }
};
class auditor : public employee{
    public:
        auditor(string name , string des) {
        this->name = name;
        this->designation = des;
    }
    void put() {
        //basic_salary = ; //calculate salary
        cout<<name<<endl<<designation<<endl<<basic_salary<<endl;
    }
};
class supervisor : public employee{
    public:
        supervisor(string name , string des) {
        this->name = name;
        this->designation = des;
    }
    void put() {
        //basic_salary = ; //calculate salary
        cout<<name<<endl<<designation<<endl<<basic_salary<<endl;
    }
};


int main() {
    string name , des; 
    cin>>name>>des;
    if(des == "Manager") {
        manager m(name , des);
        m.put();
    }
      else  if(des == "Engineer") {
        engineer e(name , des);
        e.put();
    }
       else if(des == "Auditor") {
        auditor a(name , des);
        a.put();
    }
       else if(des == "Supervisor") {
        supervisor s(name , des);
        s.put();
    }

}