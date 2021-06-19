#include<iostream>
using namespace std;

template <class T>
class vector{
    public:
    int n;
    T *vecArr;
    vector(int s , T va[]) {
        n = s;
        vecArr = new T[n];  //dynamic memory allocation
        vecArr = va;
        
    }
    T dotProduct(vector &v) {
        T dp = 0;
        for(int i = 0 ; i < n; i++) {
            dp += vecArr[i] * v.vecArr[i];
        }
        return dp;
    }
};

int main() {
    int v1a[] = {2 ,3 , 4};
    int v2a[] = {2 ,3 , 4};
    vector<int> v1(3 , v1a);
    vector<int> v2(3 , v2a);
    cout<<v1.dotProduct(v2)<<endl;

    float v3a[] = {2.4 ,3 , 4};
    float v4a[] = {2 ,3 , 4};
    vector<float> v11(3 , v3a);
    vector<float> v22(3 , v4a);
    cout<<v11.dotProduct(v22);
}