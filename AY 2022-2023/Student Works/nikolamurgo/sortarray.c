#include <stdio.h>
int main(){
    int temp;
    int size; 
    int number[30];
    printf("Enter the size of the array: ");
    scanf("%d", &size);
 
    printf("Enter the numbers: ");
    for (int i = 0; i < size; i++){
        scanf("%d", &number[i]);
    } 

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++){
            if (number[i] > number[j]) {
                temp =  number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }
 
    printf("Sorted arrray: ");
    for (int i = 0; i < size; i++){
        printf("%d ", number[i]);
    }
    return 0;
}