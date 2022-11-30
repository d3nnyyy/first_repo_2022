#include <stdio.h>
#include <math.h>
double v28(double x, double y){
    printf("%lf\n", (pow((x*y), 1/3) + 13 * pow((x-y), 4) - x / y));
}

int main() {
    v28(1.22, 3.21);
    return 0;
}