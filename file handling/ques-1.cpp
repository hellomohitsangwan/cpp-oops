// Sum of Numbers in File
// Given two file name with 'n' integers in each of them, write a C++ program to print 'Greater' if ith number in file1 is greater than ith number in file2 and print 'Not greater' otherwise.

// Input Format

// First line contains the name of file1

// Next line contains the name of file2

// Output Format

// For each pair of numbers either print Greater or Not greater

#include<iostream>
#include<fstream>
using namespace std;

int main() {
    string f1,f2; cin>>f1>>f2;
    ifstream in1 , in2;
    in1.open(f1);
    in2.open(f2);
    while(in1.eof() == 0) {
        int a , b;
        in1>>a;
        in2>>b;
        if(a>b){
            cout<<"Greater"<<endl;
        } else{
            cout<<"Not greater"<<endl;
        }
    }
}