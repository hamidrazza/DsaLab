#include <stdio.h>
#include <conio.h>
#define MAX 5

int main(){
    int arr[MAX], n, key,flag = 1;
    printf("How many element do you want : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element : ",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("\nWhich element you want to search : ");
    scanf("%d", &key);
    
    // Searching the element
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key){
            printf("Element found at %d index",i);
            flag = 0;
        }
    }
    if(flag){
        printf("Element doesn't exist in the array");
    }
    
    return 0;
}