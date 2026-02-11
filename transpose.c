#include <stdio.h>
int main()
{
    int mat[10][10];
    int sparse[50][3], trans[50][3];
    int i, j, k = 1, rows, cols, nz = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++)
    for(j = 0; j < cols; j++)
    scanf("%d", &mat[i][j]);
    sparse[0][0] = rows;
    sparse[0][1] = cols;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            if(mat[i][j] != 0)
            {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = mat[i][j];
                k++;
                nz++;
            }
        }
    }
    sparse[0][2] = nz;
    printf("\nTriplet Form:");
    for(i = 0; i <= nz; i++)
    printf("%d %d %d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    trans[0][0] = cols;
    trans[0][1] = rows;
    trans[0][2] = nz;
    k = 1;
    for(i = 0; i < cols; i++)
    {
        for(j = 1; j <= nz; j++)
        {
            if(sparse[j][1] == i)
            {
                trans[k][0] = sparse[j][1];
                trans[k][1] = sparse[j][0];
                trans[k][2] = sparse[j][2];
                k++;
            }
        }
    }
    printf("\nTranspose Triplet Form:\n");
    for(i = 0; i <= nz; i++)
    printf("%d %d %d\n", trans[i][0], trans[i][1], trans[i][2]);
    return 0;
}
