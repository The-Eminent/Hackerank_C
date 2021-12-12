// Pointers in C

#include <stdio.h>

void update(int *a,int *b) {
    int sum,abd;
    sum=*a+*b;
    abd=abs(*a-*b);
    *a=sum;
    *b=abd;
}

int main() {
    int a, b;
    int *pa, *pb;
    pa=&a;
    pb=&b;
    
    scanf("%d %d", pa, pb);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
