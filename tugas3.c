#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    int n = b - a + 1;             
    int total = n * (a + b) / 2;

    printf("%d\n", total);

    return 0;
}