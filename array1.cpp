#include <stdio.h>
#define SIZE 11

int main() {
  int i, j, i_res = 0;
  int a[SIZE], res[SIZE];
  printf("Nhap cac phan tu cua mang: (%i phan tu)\n", SIZE );
  for (i = 0; i < SIZE; i++) {
    printf("\nNhap phan tu thu %i: ",i+1 );
    scanf("%i",&a[i]);
  }
  for (i = 0; i < SIZE; i++) {
    printf("%i, ",a[i]);
  }
  for (i = 0; i < SIZE-1 ; i++) {
    for (j = i + 1; j < SIZE; j++) {
      if (a[i] > a[j]) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  printf("\nSorted array:\n");
  for (i = 0; i < SIZE; i++) {
    printf("%i, ",a[i]);
  }
  for (i = 0; i < SIZE; i++) {
    int duplicated = 0;
    for (j = 0; j<SIZE; j++){
      if (a[i] == res[j]) {
        duplicated = 1;
        break;
      }
    }
    if (duplicated == 0) {
      res[i_res] = a[i];
      i_res++;
    }
  }
  for (i = i_res; i < SIZE; i++) {
    res[i] = 0;
  }
  printf("\nFinal array:\n");
  for (i = 0; i < SIZE; i++) {
    printf("%i, ",res[i]);
  }
  return 0;
}
