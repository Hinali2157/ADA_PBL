#include <stdio.h>

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;

    while(i <= j)
    {
        while(i <= high && a[i] <= pivot)
            i++;

        while(a[j] > pivot)
            j--;

        if(i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    // place pivot at correct position
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}

void quicksort(int a[], int low, int high)
{
    if(low < high)
    {
        int p = partition(a, low, high);
        quicksort(a, low, p-1);   // left
        quicksort(a, p+1, high); // right
    }
}

int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    quicksort(a, 0, n-1);

    printf("Sorted:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}