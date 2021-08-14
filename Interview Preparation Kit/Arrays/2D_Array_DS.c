#include<stdio.h>
#include<stdlib.h>

int main()
{
    int row=6, col=6, max, A[row][col], i,j, hourGlass;
    
    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            scanf("%d", &A[i][j]);
            
    i=j=0;
    max = A[i][j]+A[i][j+1]+A[i][j+2] + A[i+1][j+1] +A[i+2][j]+A[i+2][j+1]+A[i+2][j+2];
    
    for(i=0; i<row-2; i++)
    {
        for(j=0; j<col-2; j++)
        {
           hourGlass = A[i][j]+A[i][j+1]+A[i][j+2] + A[i+1][j+1] +A[i+2][j]+A[i+2][j+1]                       +A[i+2][j+2];
            
            max = (max > hourGlass) ? max : hourGlass;
        }
    }
    
    printf("%d", max);
    
    return 0;
}
