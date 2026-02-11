#include <stdio.h>
int main()
{
    int d1, d2, i, max;
    printf("Enter degree of first polynomial: ");
    scanf("%d", &d1);
    printf("Enter degree of second polynomial: ");
    scanf("%d", &d2);
    int p1[d1+1], p2[d2+1], sum[50] = {0};
    printf("Enter coefficients of first polynomial:\n");
    for(i = 0; i <= d1; i++)
    scanf("%d", &p1[i]);
    printf("Enter coefficients of second polynomial:\n");
    for(i = 0; i <= d2; i++)
    scanf("%d", &p2[i]);
    for(i = 0; i <= d1; i++)
    sum[i] += p1[i];
    for(i = 0; i <= d2; i++)
    sum[i] += p2[i];
    if(d1 > d2)
    max = d1;
    else
    max = d2;
    printf("\nSum Polynomial:\n");
    for(i = max; i >= 0; i--)
    if(sum[i] != 0)
    printf("%dx^%d + ", sum[i], i);
    return 0;
}