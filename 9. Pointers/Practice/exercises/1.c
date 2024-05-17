#include <stdio.h>

int main() {
    
    int m = 300, *mp = &m;
    float fx = 300.600006, *fxp = &fx;
    char cht = 'z', *chtp = &cht;

    printf("\nPointer: Demonstrate the use of & and * operator:\n");
    printf("--------------------------------------------------------\n");
    printf("m = %d\n", m);
    printf("fx = %lf\n", fx);
    printf("cht = %c\n", cht);

    printf("\nUsing & operator:\n");
    printf("--------------------------------------------------------\n");
    printf("address of m = %x\n", &mp);
    printf("address of fx = %x\n", &fxp);
    printf("address of cht = %x\n", &chtp);

    printf("\nUsing & and * operator:\n");
    printf("--------------------------------------------------------\n");
    printf("value at address of m = %d\n", *(&m));
    printf("value at address of fx = %lf\n", *(&fx));
    printf("value at address of cht = %c\n", *(&cht));

    printf("\nUsing only pointer variable:\n");
    printf("--------------------------------------------------------\n");
    printf("address of m = %x\n", mp);
    printf("address of fx = %x\n", fxp);
    printf("address of cht = %x\n", chtp);

    printf("\nUsing only pointer operator:\n");
    printf("--------------------------------------------------------\n");
    printf("value at address of m = %d\n", *mp);
    printf("value at address of fx = %lf\n", *fxp);
    printf("value at address of cht = %c\n", *chtp);

    return 0;
}