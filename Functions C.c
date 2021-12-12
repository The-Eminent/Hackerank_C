//Functions in C

#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    a=a>b? a:b;
    c=c>d?c:d;
    a=a>c?a:c;
    return a;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
