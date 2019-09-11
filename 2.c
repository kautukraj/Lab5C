/* Author : Kautuk Raj */
#include <stdio.h>
int main()
{

    const long long n=20;
	long long a[n];
    long long i,j,t,m,s=0,c=0;
    for (i = 0; i < n; i++)
        scanf("%lli,", &a[i]); /* reading formatted input from console */

    for (i=0;i<n-1;i++)
    {   
        m=i;
		for (j=i+1;j<n;j++)
        {
            c++;
            if (a[m]>a[j])
            m=j;
        }
        
        
        s++;
		t=a[m];
        a[m]=a[i];
        a[i]=t;
    }
    

    for (i=0;i<n;i++)
    {
        printf("%lli ",a[i]);
    }
    putchar('\n');
    printf("%lli %lli",s,c);
    return 0;
}


