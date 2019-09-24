#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int sum = 0;
    int num;
	cout<<"enter three numbers whose sum you want\n";
    for (int i=0;i<3;i++){cin>>num; sum += num;}

    cout<<sum<<"\n";


    // Pgm2
    // Complete the code.
    int num1;
    long num2;
    char a;
    float ff;
    double ff2;
    cout<<"Enter int, long int, char, float and double numbers\n";
    cin>>num1>>num2>>a>>ff>>ff2;
    printf("%d \n%ld \n%c \n%5.3f \n%13.9lf \n",num1,num2,a,ff,ff2);
    
    
    return 0;
}

