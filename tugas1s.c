#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double J ,T ,V;
    
    scanf("%lf",&J);
    scanf("%lf",&T);
    
    V=J/T;
    
    printf("%.3f",V);

    return 0;
}
