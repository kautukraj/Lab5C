/* Author : Kautuk Raj */
/* C program to implement MergeSort algorithm */
#include<stdio.h>
 
void sort(long long int[],long long int,long long int);
void merge(long long int[],long long int,long long int,long long int,long long int);
long long int n,c;
int main()
{
	long long int i;
	scanf("%lld",&n); /* using format specifier lld for long long int */
	long long int a[n];
	for(i=0;i<n;i++)
		scanf("%lld,",&a[i]); /* reading formatted input from console */
		
	sort(a,0,n-1); /* calling the sort function */
	
	for(i=0;i<n;i++)
		printf("%lld ",a[i]);
	putchar('\n');
	printf("%lld",c);
	return 0;
}
 
void sort(long long int a[],long long int i,long long int j)
{
	long long int m;
	if(i<j)
	{
		m=(i+j)/2; /* finding the middle position of the array */
		sort(a,i,m); /* sorting lower half of array */	
		sort(a,m+1,j); /* sorting upper half of array */
		merge(a,i,m,m+1,j); /* merging the two arrays */
		c++; /* increasing the number of times merge is called */
	}
}
 
void merge(long long int a[],long long int i1,long long int j1,long long int i2,long long int j2)
{
	long long int temp[n];	
	long long int i,j,k;
	i=i1;
	j=i2;
	k=0;
	
	while(i<=j1 && j<=j2)
	{
		if(a[i]<a[j])
			temp[k++]=a[i++]; /* filling in the auxillary array */
		else
			temp[k++]=a[j++]; /* filling in the auxillary array */
	}
	
	while(i<=j1)
		temp[k++]=a[i++];
		
	while(j<=j2)
		temp[k++]=a[j++];
		
	
	for(i=i1,j=0;i<=j2;i++,j++) /* transferring elments back to main array from auxillary array */
		a[i]=temp[j];
}
