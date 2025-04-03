#include <stdio.h>
#include <conio.h>
#define MAX 10

// BUBBLE SORTING
void main()
{
    int arr[MAX], n, i, j;
    printf("Enter the array size : ");
    scanf("%d", &n);
    
    // Loop for entering the data in our array
    for (i = 0; i < n; i++) {
        printf("Enter the %d value : ",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("Array before Sorting : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    // Now we're going to do sorting
    for (i = 0; i < n; i++) {
        for(j = 0; j < (n-i-1); j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // Printing the sorted array
    printf("\n");
    printf("Array after Sorting : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}