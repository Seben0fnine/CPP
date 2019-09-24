#include <iostream>
#include <cstdio>
using namespace std;

void convert_string(int);


int main() {
    // Complete the code.
    int a, b;
    cin>>a>>b;
    for(int num =a; num<=b;num++)
    {   //cout<<num;
        if (num <= 9) {convert_string(num);}
        else if (num%2 == 0)  cout<<"even\n";
        else cout<<"odd\n";
    }
    return 0;
}

void convert_string(int num)
{
    switch(num)
    {
        case 0 : cout<<"zero\n"; break;
        case 1 : cout<<"one\n"; break;
        case 2 : cout<<"two\n"; break;
        case 3 : cout<<"three\n"; break;
        case 4 : cout<<"four\n"; break;
        case 5 : cout<<"five\n";  break;
        case 6 : cout<<"six\n";  break;
        case 7 : cout<<"seven\n";  break;
        case 8 : cout<<"eight\n";  break;
        case 9 : cout<<"nine\n";  break;
        default: cout<<"error\n";
    }
    return;
}
