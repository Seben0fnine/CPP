#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Given an array return index of the numbers which add upto a target value

void printVector(vector<int>);

int main(void)
{
 vector<int> v(3);
 v[0] = 10;
 v[1] = 27;
 v[2] = 55;
 v.push_back(6);
 cout<< v.front()<<endl;
 cout<< v.back()<<endl;
 cout<< v.at(2) << endl;
 cout<<"Entire Vector\n";
 printVector(v);
 return 0;

}

void printVector(vector<int> b)
{
for(int i=0; i< b.size(); i++) cout<<b.at(i)<<" | ";
}
