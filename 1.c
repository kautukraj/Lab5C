/* Author : Kautuk Raj */
#include <stdio.h>
int main()
{
    int n=20;
    int a[n];
    int i,j,t,s=0,c=0;
    for (i = 0; i < n; i++)
        scanf("%d,", &a[i]); /* reading formatted input from console */

    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            c++;
            if (a[j]>a[j+1])
            {
                s++;
				t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    putchar('\n');
    printf("%d %d",s,c);
    return 0;
}


