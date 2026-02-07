#include <stdio.h>
int main()
{
    int a[50][3], b[50][3], c[100][3];
    int i=1, j=1, k=1;
    printf("Enter rows, columns and non-zero elements of first matrix: ");
    scanf("%d %d %d", &a[0][0], &a[0][1], &a[0][2]);
    printf("Enter row column value:\n");
    for(i=1;i<=a[0][2];i++)
    scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
    printf("Enter rows, columns and non-zero elements of second matrix: ");
    scanf("%d %d %d", &b[0][0], &b[0][1], &b[0][2]);
    printf("Enter row column value:\n");
    for(i=1;i<=b[0][2];i++)
    scanf("%d %d %d",&b[i][0],&b[i][1],&b[i][2]);
    i=1; j=1;
    c[0][0]=a[0][0];
    c[0][1]=a[0][1];
    while(i<=a[0][2] && j<=b[0][2])
    {
        if(a[i][0]==b[j][0] && a[i][1]==b[j][1])
        {
            c[k][0]=a[i][0];
            c[k][1]=a[i][1];
            c[k][2]=a[i][2]+b[j][2];
            i++; j++; k++;
        }
        else if(a[i][0]<b[j][0] ||
               (a[i][0]==b[j][0] && a[i][1]<b[j][1]))
        {
            c[k][0]=a[i][0];
            c[k][1]=a[i][1];
            c[k][2]=a[i][2];
            i++; k++;
        }
        else
        {
            c[k][0]=b[j][0];
            c[k][1]=b[j][1];
            c[k][2]=b[j][2];
            j++; k++;
        }
    }
    c[0][2]=k-1;
    printf("\nResultant Sparse Matrix:\n");
    for(i=0;i<=c[0][2];i++)
    printf("%d %d %d\n",c[i][0],c[i][1],c[i][2]);
    return 0;
}