#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t, *rc, *brc, *moves, l,i,j, size, temp, check, sum;
    scanf("%d", &t);

    while(t--)
    {
        sum = check = 0;
        scanf("%d", &l);
        size=l;
        rc = (int *)malloc(l * sizeof(int));
        brc = (int *)malloc(l * sizeof(int));
        moves = (int *)calloc(l+1, sizeof(int));

        for(i=0; i<l; i++)
        {
            rc[i] = i+1;
            scanf("%d", &brc[i]);
        }

        i=0;
        while(i<l)
        {
            if (rc[i] == brc[i])
            {  i++; continue; }

            for(j=i; j<l; j++)  if(rc[j] == brc[i]) break;
            for(int k=j; k>i; k--)
            {
                   temp = rc[k];
                   rc[k] = rc[k-1];
                   rc[k-1] = temp;
                   sum++;
                   moves[brc[i]]++;
                   if(moves[brc[i]]>2) {check = 1; break;}
            }
            i++;
            if(check) break;
        }

        if(check) printf("Too chaotic\n");
        else printf("%d\n", sum);
    }
}
