/* Author : Kautuk Raj */
/* C program to implement bubble sort algorithm */
#include <stdio.h>
int main()
{
    int n=20;
    long long int a[n]; /* using format specifier lld for long long int */
    long long int i,j,t,s=0,c=0;
    for (i = 0; i < n; i++)
        scanf("%lld,", &a[i]); /* reading formatted input from console */

    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            c++; /* increasing the number of comparisons by one */
            if (a[j]>a[j+1])
            {
                s++; /* increasing the number of swaps by one */
				t=a[j];
                a[j]=a[j+1]; /* interchanging the values */
                a[j+1]=t;
            }
        }
    }

    for (i=0;i<n;i++)
    {
        printf("%lld ",a[i]); /* printing the sorted array */
    }
    putchar('\n');
    printf("%lld %lld",s,c);
    return 0;
}


