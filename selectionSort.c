#include <stdio.h>
#include <conio.h>
#define MAX 10

void main()
{
    int arr[MAX], n, i, j, min, temp;

    printf("Enter the array size : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d : ", (i + 1));
        scanf("%d", &arr[i]);
    }

    printf("Array before sorting : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // Sorting the array
    for (i = 0; i < (n - 1); i++)
    {
        min = i;

        for (j = (i + 1); j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("\nArray after sorting : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}