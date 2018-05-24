/** shell sort */
void shellsort(int[], int);

int main()
{
    int a[] = {1,23,34,24,32,25,31,3,36,40};
    int b[] = {32,31,30,29,28,27,26,25,24,23};
    shellsort(b, 10);
}

void shellsort(int v[], int n)
{
    int gap, i, j, temp;

    for(gap = n/2; gap > 0; gap /= 2) {
        for(i = gap; i<n; i++) {
            for(j=i-gap; j>=0 && v[j] > v[j+gap]; j-=gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
        }
    }
}