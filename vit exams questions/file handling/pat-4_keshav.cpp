
// Consider a text file comprised of set of words . Read the text file and print he words in the ascending order  of their length. If more than one word is having same  length  arrange them in the ascending order of the first letter. For example   consider the words : “sample”,”is”,”the”,”god”. The output is “is”,”god”,”the”,”sample”.  “ the” and “god” are equal in length so arrange in the alphabetical order.

 

// Input:

// File name

// Output:

// List of words

#include<iostream>
#include <fstream>
#include <iterator>
#include<algorithm>
using namespace std;


bool compare(string &s1,string &s2)
{
    if(s1.size() == s2.size()) {
        return int(s1[0]) < int(s2[0]);
    }
    return s1.size() < s2.size();
}
void printArraystring(string str[], int n)
{
    for (int i=0; i<n; i++)
        cout << str[i] <<endl;
}
int main() 
{
    string fileName; cin>>fileName;
 ifstream fin(fileName); 
 int word=1; 
 char ch;
 fin.seekg(0,ios::beg); 
 
 while(fin)
 {
  fin.get(ch);
  if(ch==' '||ch=='\n')
   word++;
 } 
 string words[word];
      ifstream in(fileName);
 for(int i = 0 ; i < word ; i++) {
     string theWord;
     in>>theWord;
     words[i] = theWord;
 }
 sort(words , words+word , compare);
 printArraystring(words , word);
 return 0;
}