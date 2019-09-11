/* Author : Kautuk Raj */
#include <stdio.h>
int main()
{
    int n=20;
    int a[n];
    int i,j,t,s=0,c=0;
    int f=1;
    for (i = 0; i < n; i++)
        scanf("%d,", &a[i]); /* reading formatted input from console */

    for (j=0;j<n-1 && f==1 ;j++)
    {
        f=0;
		for (i=0;i<n-1-j;i++)
        {
            c++;
            if (a[i]>a[i+1])
            {
				f=1;
				t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
                s++;
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


