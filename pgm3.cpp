#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function   
    int temp = *a;
    *a = temp + *b;
    *b = (temp- *b)>0?(temp - *b): (*b - temp); 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}

