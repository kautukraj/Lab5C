/* Author : Kautuk Raj */
/* C program for the implementation of selection sort algorithm */
#include <stdio.h>
int n=20;
long long c,s;
int main()
{

	long long a[n];
    long long i,j;
    for (i = 0; i < n; i++)
        scanf("%lld,", &a[i]); /* reading formatted input from console */
    ssort(a);   
	for (i=0;i<n;i++)
    {
        printf("%lld ",a[i]); /* using format specifier lld for long long int */
    }
    printf("\n%lld %lld",s,c);
    return 0;
}
void ssort(int a[])
{
	long long i,m,j,t;
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
        a[i]=a[m]; /* swapping the values */
        a[m]=t;
        s++; /* increasing the number of swaps by one */
    }
    

    
}


