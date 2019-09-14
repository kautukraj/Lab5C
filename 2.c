/* Author : Kautuk Raj */
/* C program for the implementation of selection sort algorithm */
#include <stdio.h>
int main()
{

    long long n=20;
	long long a[n];
    long long i,j,t,m,s=0,c=0;
    for (i = 0; i < n; i++)
        scanf("%lld,", &a[i]); /* reading formatted input from console */

    for (i=0;i<n-1;i++)
    {   
        
		m=i; /* assigning minimum index as i */
		for (j=i+1;j<n;j++)
        {
            c++; /* increasing the number of comparisons by one */
            if (a[m]>a[j])
            m=j;
        }
        
		t=a[i];
        a[i]=a[m];
        a[m]=t;
        s++; /* increasing the number of swaps by one */
    }
    

    for (i=0;i<n;i++)
    {
        printf("%lld ",a[i]); /* using format specifier lld for long long int */
    }
    printf("\n%lld %lld",s,c);
    return 0;
}


