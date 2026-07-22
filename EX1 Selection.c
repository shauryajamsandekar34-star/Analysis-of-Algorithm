//SELECTION SORT EX1
#include <time.h>

int main()
{
    int n, i, j, min, temp;
    int arr[100000];
    long long comparisons = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    clock_t start = clock();

    // Selection Sort
    for(i = 0; i < n - 1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            comparisons++;

            if(arr[j] < arr[min])
                min = j;
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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