//1D Arrays in C


#include <stdio.h>

int main() {

    int n, sum = 0, element;
    scanf("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &element);
        a[i] = element;
        sum += element;
    }
    printf("%d", sum);
    return 0;
}
