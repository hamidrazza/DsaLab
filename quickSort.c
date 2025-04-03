#include <stdio.h>
#include <conio.h>
#define MAX 10

int divide(int[], int, int);
void quickSort(int[], int, int); 

void main(){
    int arr[MAX],n, i, left, right;
    left = 0;
    right = n-1;

    printf("Enter the array size : ");
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        printf("Enter the element %d : ",(i+1));
        scanf("%d", &arr[i]);
    }
    printf("Array before Sorting : ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    // Sorting the array
    quickSort(arr, left, right);

    printf("\nArray after sorting : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }   
}
void quickSort(int arr[], int left, int right) {
    int j;
    if(left < right) {
        j = divide(arr, left, right);
        quickSort(arr, left, j-1);
        quickSort(arr, j+1, right);  
    }
}
int divide(int arr[], int left, int right) {
    int pivot = arr[left];   
    int temp;              
    int i = left;
    int j = right;

    while(i < j) {
        while(arr[i] <= pivot && i < right)
            i++;
        while(arr[j] > pivot)
            j--;

        if(i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
    temp = arr[left];
    arr[left] = arr[j];
    arr[j] = temp;
    
    return j;
}