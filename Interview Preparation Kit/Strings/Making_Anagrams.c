#include<stdio.h>

int main()
{
    int a[26] = {0}, b[26] = {0}, sum = 0;
    char s1[10000], s2[10000];
    
    scanf("%s %s", s1, s2);
    
    for (int i=0; s1[i] != '\0'; i++)    a[s1[i]-97]++;
    for (int i=0; s2[i] != '\0'; i++)    b[s2[i]-97]++;

    for (int i=0; i<26; i++)  if (a[i]!=b[i]) sum+=(a[i]>b[i])?(a[i]-b[i]):(b[i]-a[i]);
    
    printf("%d", sum);
    
}
