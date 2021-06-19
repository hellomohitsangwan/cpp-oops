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