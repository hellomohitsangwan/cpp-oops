#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
    //writing into a file
    ofstream out;
    out.open("file.txt");
    out<<"writing first line";
    out.close();

    //reading into files
    ifstream in;
    string s1 , s2 , s3;
    in.open("file.txt");
    // in>>s1>>s2;
    // cout<<s1<<" "<<s2;
    // or to read the whole file
    int count = 0;
    while(in.eof() == 0) { //means eof(end of file) is not encountered yet
        getline(in , s3);
        cout<<s3<<endl;
        
        // getting no. of elements in the file 
        // string s4;
        // in>>s4;
        // count++;
    }
    cout<<endl<<count;
    in.close();
}