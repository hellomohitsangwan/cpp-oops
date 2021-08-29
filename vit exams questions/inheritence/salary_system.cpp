
// Write a C++ program (using inheritance) to create a payroll system for an organization with the following information.
// Emp ID
// Emp Name
// Gender
// Designation
// Account Number
// Account Type
// Basic Pay, DA, HRA
// Deductions like Provident fund, professional tax, insurance premium.

// Design a base class 'employee' consisting of data members emp id, emp name, gender, designation and the member functions get_data() to get the inputs and put_data() to display the class member details. 

// Create another base class 'account' consisting of data members such as account number, account type and the member functions get_info() to get the inputs and put_data() to display the class member details. 

// Create a derived class 'payroll' that consists of the data members basic pay, DA, HRA and deductions (Provident fund, professional tax, insurance premium). The derived class should have the member functions: get_details() to get the neccessary inputs, 'calculate()' to perform the payroll calculations (based on the formula given below) and put_data() to display the net salary of an employee along with the employee details. 

// Note:
// Payroll calculation: 
//     Net yearly salary = (Basic Pay+ DA + HRA) - (Provident fund + Professional tax + insurance premium).

// (i) Your program should use inheritance concept.
// (ii) Accessing the base class members by using derived class objects.
// (iii) Resolve the ambiguity (if any) arises.

// Example:
// Input:
// 5524 (Emp ID)
// Ajay (Emp name)
// male (Gender)
// Developer (Designation)
// 34343 (Account number)
// savings (Account  type)
// 300000 (Basic Pay)
// 80000 (DA)
// 120000 (HRA)
// 20000 (Provident fund)
// 6000 (Professional Tax)
// 4000 (Insurance premium)

// Output:
// 5524 (Emp ID)
// Ajay (Emp name)
// male (Gender)
// Developer (Designation)
// 34343 (Account number)
// savings (Account Type)
// 300000 (Basic Pay)
// 80000 (DA)
// 120000 (HRA)
// 20000 (Provident fund)
// 6000 (Professional Tax)
// 4000 (Insurance premium)
// 470000 (Net Salary)

#include <iostream>
using namespace std;

class employee {
    public:
    int emp_id;
    string emp_name , gender , designation;
    void get() {
        cin>>emp_id>>emp_name>>gender>>designation;
    }
    void put() {
        cout<<emp_id<<endl<<emp_name<<endl<<gender<<endl<<designation<<endl;
    }
};
class account {
    public:
    int acc_no;
    string acc_type;
    void get() {
        cin>>acc_no>>acc_type;
    }
    void put() {
        cout<<acc_no<<endl<<acc_type<<endl;
    }
};

class payroll : public employee , public account {
    public:
    int bp , da , hra , pf , pt , ip;
    void getDetails() {
        employee :: get();
        account :: get();
        cin>>bp>>da>>hra>>pf>>pt>>ip;
    }
    void put_data() {
        int netSalary = (bp + da + hra) - (pf + pt + ip);
        employee :: put();
        account :: put();
        cout<<bp<<endl<<da<<endl<<hra<<endl<<pf<<endl<<pt<<endl<<ip<<endl<<netSalary;
    }
};

int main() {
    payroll p;
    p.getDetails();
    p.put_data();
}