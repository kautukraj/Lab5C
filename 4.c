#include <stdio.h>
long long i,n,val;
void swap (long long*, long long*);
int partition (long long [],long long,long long); /* function signature */
void quickSort (long long [],long long,long long);
void printArray (long long[],long long);
void swap(long long * a, long long * b) /* function to swap two variables */
{
    long long t = *a;
    *a = *b;
    *b = t;
}

int partition(long long a[], long long f, long long r)
{
    long long pivot = a[r]; /* setting the pivot value as the last element */
    long long i = (f - 1); /* setting the P_index as the first value minus 1 */
    long long j;
    for (j = f; j < r; j++)
    {
        if (a[j] < pivot) /* if present number is less than pivot value */
        {
            i++; /* incrementing the P_index by one */
            swap(&a[i], &a[j]); /* swapping */
        }
    }
    swap(&a[i + 1], &a[r]); /*swapping the pivot value and P_index numbers*/
    return (i + 1); /* return the P_index */
}
void quickSort(long long a[], long long f, long long r)
{
    if (f < r) /* condition if front is less than rear */
    {
        long long mid = partition(a, f, r);
        if (f==0 && r==n-1)
        val=mid; /* finding out P_index of pivot value */
        quickSort(a, f, mid-1); /* sorting lower half of array */
        quickSort(a, mid + 1, r); /* sorting upper half of array */
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
    quickSort(a, 0, n - 1); /* function call */
    printArray(a,n);
    putchar('\n');
    printf("%lld",val);
    return 0;
}
