#include<stdio.h>

// Recursion
int stepPerms(int n) 
{
    if (n <= 0)
        return 0;
        
    else if (n == 1)
        return 1;
        
    else if (n == 2)
        return 2;
        
    else if (n == 3)
        return 4;
        
    else 
        return (stepPerms(n-3) + stepPerms(n-2) + stepPerms(n-1));

}

/*
// Iteration
int stepPerms(int n) {
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    int n1=1; int n2= 2; int n3=4;
    int ans=0;
    for(int i=4; i<=n; i++){
        ans = (n1+n2+n3);
        n1=n2;
        n2=n3;
        n3=ans;
    }
    return ans;
}
*/

int main()
{
    int x, n, i;
    scanf("%d", &x);
    
    for (i = 1; i <= x; i++)
    {
        scanf("%d", &n);
        printf("%d\n",stepPerms(n));
    }   
    
    return 0;
}
