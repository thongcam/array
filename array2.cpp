#include <stdio.h>
#define SIZE 11

int main() {
  int i, prime_count = 0;
  int prime = 1, duplicated = 0;
  int res[SIZE], a[SIZE] = {7, 3, 5, 7, 1, 1, 2, 5, 8, 9, 6};
  for (i = 0; i < SIZE; i++) {
    int div = 2;
    if (a[i] == 0 || a[i] == 1) {
      continue;
    } else {
      for (int temp = 2; temp < a[i]/2; temp++) {
        prime = 1;
        if (a[i]%temp == 0) {
          prime = 0;
          break;
        }
      }
      if (prime == 1 || a[i] == 2) {
        duplicated = 0;
        for (int temp = 0; temp < SIZE; temp++) {
          if (res[temp] == a[i]) {
            duplicated = 1;
          }
        }
        if (duplicated == 0){
          res[prime_count] = a[i];
          prime_count += 1;
        }
      }
    }
  }
  printf("Mang ban dau: \n");
  for (i = 0; i < SIZE; i++) {
    printf("%i, ", a[i]);
  }
  printf("\nMang co %i so nguyen to, do la cac so: ",prime_count);
  for (i = 0; i < prime_count; i++) {
      printf("%i, ",res[i]);
  }
  return 0;
}
