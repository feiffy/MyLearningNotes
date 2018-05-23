int binsearch(int, int[], int);

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    binsearch(5, arr, 10);
    return 0;
}

/**
 * binsearch: find x in v[0] ... v[n-1]
 */
int binsearch(int x, int v[], int n)
{
    int low, high, mid; // 下标

    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < v[mid])
        {
            high = mid + 1;
        }
        else if (x > v[mid])
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}