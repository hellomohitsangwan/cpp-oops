
// Develop a C++ program to find the "sum of elements in a list" using "function template" and "STL". 

// For eg., create a list to hold the integer elements and take 3 integer elements as input. Same way, create an another list for floating point elements and take 3 floating point elements as input. Make a function call to perform the following.
// Create a function template 'templist' to calculate the sum of elements in the list (for both interger and floating point elements) and display the results (elements in the list along with the sum of elements).

// Note:
// 1. Your program should use a single function template to determine the sum of elements for both integer and floating point elements.
// 2. Your program should use the appropriate data structures "list / iterators" as required.
 

// Example:
// Input:
// 10 (Integer type element belongs to the first list)
// 30 (Integer type element belongs to the first list)
// 50 (Integer type element belongs to the first list)
// 1.5 (Floating point type element belongs to the second list)
// 3.5 (Floating point type element belongs to the second list)
// 5.5 (Floating point type element belongs to the second list)

// Output:
// 10
// 30
// 50
// 90 (Sum of elements of first list)
// 1.5
// 3.5
// 5.5
// 10.5 (Sum of elements of second list)


#include<iostream>
#include<list>
#include<iterator>
using namespace std;

template <class T>
T add(list<T> l) {
    T sum = 0;
    for(auto e : l) {
        sum += e;
    }
    return sum;
}

template <class T>
void print(list<T> l) {
    for(auto e : l) {
        cout<<e<<endl;
    }
}
int main() {
    list<int> l1;
    list<float> l2;
    for(int i = 0 ; i < 3 ; i++) {
        int n; cin>>n;
        l1.push_back(n);
    }
    for(int i = 0 ; i < 3 ; i++) {
        float n; cin>>n;
        l2.push_back(n);
    }
    int sum1 = add<int>(l1);
    float sum2 = add<float>(l2);
    print<int>(l1);
    cout<<sum1<<endl;
    print<float>(l2);
    cout<<sum2;
}