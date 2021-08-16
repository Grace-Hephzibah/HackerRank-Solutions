#include<stdio.h>

int main()
{
    int t, first, sum;
    char str[1000000];
    scanf("%d", &t);
    
    while(t--)
    {
        sum=0;
        scanf("%s", str);
        first = str[0]-65;
        for(int i=1; str[i] != '\0'; i++)
        {
            if (first==0 && str[i]-65==1) first=1;
            else if (first==1 && str[i]-65==0) first=0;
            else sum++;
        }
        printf("%d\n", sum);
    }
    return 0;
}
