#include<stdio.h>

int main()
{
    int n, rot;
    scanf("%d %d", &n, &rot);
    
    int a[2*n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        a[n+i] = a[i];
    }
    
    rot %= n;
    
    for(int i=rot, j=0; j<n; j++, i++)
        printf("%d ", a[i]);
    
    return 0;
}
