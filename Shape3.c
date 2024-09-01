#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d",&n);
    int k=1,s=n-1;
    for(int i=0; i<(2*n); i++)
    {
        for(int j=0; j<s; j++) printf(" ");
        for(int j=0; j<k; j++) printf("*");
        printf("\n");
        if(i<n-1)
        {
            k+=2;
            s--;
        }
        else if(i==n-1){ k=k+0,s=s+0;}
        else
            {
                k-=2;
                s++;
            }
    }
    return 0;
}