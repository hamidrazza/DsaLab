#include <stdio.h>
#include <conio.h>
#define MAX 10

int main(){
	int arr[MAX], i, j, n;
	//clrscr();
	printf("Enter the array size : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter the element %d : ", (i+1));
        scanf("%d",&arr[i]);
    }
	printf("Array before sorting : ");
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	// Sorting the array
	for(i = 1; i < n; i++){
		int temp = arr[i];
		j = i-1;

		while(j >= 0 && arr[j] > temp){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
	printf("\nArray after sorting : ");
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	//getch();
	return 0;
}