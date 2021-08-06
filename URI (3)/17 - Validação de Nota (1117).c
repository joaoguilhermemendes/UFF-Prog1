#include <stdio.h>
double num() {
    double n;
    do {
        scanf("%lf", &n);
        if (n < 0 || n > 10)
            printf("nota invalida\n");
    } while (n < 0 || n > 10);
    return n;
}
int main(){
    double n1 = num(), n2 = num();
    printf("media = %.2lf\n",(n1 + n2) / 2.0);
    return 0;
}
