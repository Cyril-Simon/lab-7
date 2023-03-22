#include <stdio.h>
#include <stdlib.h>

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
    printf("Iteration %d\n", i + 1);

    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        count++;
      }

      printArr(arr, n);
      printf("Index %d needs %d swaps\n", i, count);
    }
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