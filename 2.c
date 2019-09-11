/* Author : Kautuk Raj */
#include <stdio.h>
int main()
{

    int num[20];
    int i,j,t,m,s=0,c=0;
    for (i = 0; i < 20; i++)
        scanf("%d,", &num[i]); /* reading formatted input from console */

    for (i=0;i<19;i++)
    {   
        m=i;
		for (j=i+1;j<20;j++)
        {
            c++;
            if (num[m]>num[j])
            m=j;
        }
        
        
                s++;
				t=num[m];
                num[m]=num[i];
                num[i]=t;
    }
    

    for (i=0;i<20;i++)
    {
        printf("%d ",num[i]);
    }
    putchar('\n');
    printf("%d %d",s,c);
    return 0;
}


