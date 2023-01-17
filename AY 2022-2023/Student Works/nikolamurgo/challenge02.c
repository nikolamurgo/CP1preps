#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main() {
  // Create an array of 10 integers
  int arr[SIZE];

  // Ask the user to enter 10 integers
  printf("Enter 10 integers: ");
  for (int i = 0; i < SIZE; i++) {
    scanf("%d", &arr[i]);
  }

  // Print the contents of the array
  printf("Original array: ");
  for (int i = 0; i < SIZE; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  const compare;

  // Sort the array in ascending order
  qsort(arr, SIZE, sizeof(int), (int (*)(const void *, const void *)) compare);

  // Print the sorted array
  printf("Sorted array: ");
  for (int i = 0; i < SIZE; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

// Compare function for use with qsort
int compare(const void * a, const void * b) {
  return ( *(int*)a - *(int*)b );
}
