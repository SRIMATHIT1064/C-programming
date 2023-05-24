#include <stdio.h>
int main()
 {
    int dividend, d, q, r;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter d: ");
    scanf("%d", &d);
    q = dividend / d;
    r = dividend % d;
    printf("Quotient = %d\n", q);
    printf("Remainder = %d", r);
    return 0;
}
