#include<stdio.h>
#include<time.h>

int main()
{
    int n, i, j, key;
    int arr[100000];
    long long comparisons = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    clock_t start = clock();

    // Insertion Sort
    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while(j >= 0)
        {
            comparisons++;

            if(arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            else
                break;
        }
        arr[j + 1] = key;
    }

    clock_t end = clock();

    printf("\nSorted Array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n\nNumber of Data Comparisons = %lld", comparisons);
    printf("\nExecution Time = %lf seconds",
           (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}