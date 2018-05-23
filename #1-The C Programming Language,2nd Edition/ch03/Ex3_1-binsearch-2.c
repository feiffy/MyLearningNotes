#include <stdio.h>

int binsearch(int, int[], int);

int main()
{
    int arr[] = {1, 2, 5, 21, 45, 46, 51, 52, 55, 59};
    printf("%d", binsearch(1, arr, 10));
    return 0;
}

/**
 * binsearch with only one test: find x in v[0] ... v[n-1]
 */
int binsearch(int x, int v[], int n)
{
    int low, high, mid; // 下标

    low = 0;
    high = n - 1;

    mid = (low + high) / 2;
    while (low <= high && x != v[mid])
    {
        if (x < v[mid])
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }
    if(x==v[mid])
        return mid;
    else
        return -1;
}