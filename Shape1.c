#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

        int n;
        scanf("%d",&n);
        int k=n;
        for(int i=0;i<n;i++)
        {
            for(int j=k;j>0;j--) printf("*");
            k--;
            printf("\n");
        }
    return 0;
}