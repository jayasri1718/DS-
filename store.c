#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("Enter 5 elements:");
    for(i = 0; i <= 4;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements are:");
    for(i = 0; i <= 4;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}