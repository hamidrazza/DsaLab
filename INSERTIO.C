#include <stdio.h>
#include <conio.h>
#define MAX 5

void main(){
	int arr[MAX] = {23,20,6,5,4};
	int i,j;
	clrscr();
	printf("Array before sorting : ");
	for(i = 0; i < MAX; i++){
		printf("%d ", arr[i]);
	}

	for(i = 1; i < MAX; i++){
		int temp = arr[i];
		j = i-1;

		while(j >= 0 && arr[j] > temp){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
	printf("\nArray after sorting : ");
	for(i = 0; i < MAX; i++){
		printf("%d ", arr[i]);
	}
	getch();
}