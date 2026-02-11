#include <stdio.h>
int main()
{
    int d1, d2, i, j;
    printf("Enter degree of first polynomial: ");
    scanf("%d", &d1);
    printf("Enter degree of second polynomial: ");
    scanf("%d", &d2);
    int p1[d1+1], p2[d2+1], result[d1+d2+1];
    for(i = 0; i <= d1 + d2; i++)
    result[i] = 0;
    printf("Enter coefficients of first polynomial:\n");
    for(i = 0; i <= d1; i++)
    scanf("%d", &p1[i]);
    printf("Enter coefficients of second polynomial:\n");
    for(i = 0; i <= d2; i++)
    scanf("%d", &p2[i]);
    for(i = 0; i <= d1; i++)
    {
        for(j = 0; j <= d2; j++)
        {
            result[i + j] += p1[i] * p2[j];
        }
    }
    printf("\nResultant Polynomial:\n");
    for(i = d1 + d2; i >= 0; i--)
    if(result[i] != 0)
    printf("%dx^%d + ", result[i], i);
    return 0;
}