#include <stdio.h>
long long i,n,val;
void swap (long long*, long long*);
int partition (long long [],long long,long long);
void quickSort (long long [],long long,long long);
void printArray (long long[],long long);
void swap(long long * a, long long * b)
{
    long long t = *a;
    *a = *b;
    *b = t;
}

int partition(long long a[], long long f, long long r)
{
    long long pivot = a[r];
    long long i = (f - 1);
    long long j;
    for (j = f; j < r; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[r]);
    return (i + 1);
}
void quickSort(long long a[], long long f, long long r)
{
    if (f < r)
    {
        long long mid = partition(a, f, r);
        if (f==0 && r==n-1)
        val=mid;
        quickSort(a, f, mid - 1);
        quickSort(a, mid + 1, r);
    }
}
void printArray(long long a[], long long size)
{
    long long i;
    for (i = 0; i < size; i++)
        printf("%lld ", a[i]);
}
int main()
{
    scanf("%lld",&n);
    long long a[n];
    for (i=0;i<n;i++)
    scanf("%lld,",&a[i]);
    quickSort(a, 0, n - 1);
    printArray(a,n);
    putchar('\n');
    printf("%lld",val);
    return 0;
}
