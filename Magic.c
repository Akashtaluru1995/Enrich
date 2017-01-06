#include<stdio.h>
#include<string.h>
void main()
{
    int e[99][99],j,i,k,n;
    Scanf(”%d”,&n);
    i = n/2; 
    j = n-1;
    for (k=1; k<=n*n;k++)
    {
        if (i==-1 && j==n)
        {
            i = 0;
            j=n-2;
        }
        else if(j==n)
        {
            j = 0;
        }
        else if(i==-1)
        {
            i=n-1;
        }
        else if(e[i][j])
        {
            j=j-2;
            i++;
        }
        else
        {
            i--;
            j++; 
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", e[i][j]);
        }
        printf("\n");
    }
}
