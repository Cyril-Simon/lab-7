#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}


void printArr(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");
}

void bubbleSort(int *arr, int n) {
  int i, j, temp;

  for (i = 0; i < n; i++) {
    int count = 0;
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j+1]);
        count++;
      }
    }

      printf("Iteration %d, total number of swaps: %d\n", i + 1, count);
    
  }

  // for (i = 0; i < n; i++) {
  // }
}

int main(void) {
  int numArr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

  int n = 9;

  printf("Array before the bubble sort:\n");

  printArr(numArr, n);

  bubbleSort(numArr, n);

  printf("Sorted Array:\n");

  printArr(numArr, n);

  return 0;
}