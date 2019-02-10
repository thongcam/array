#include <stdio.h>
#define SIZE 11

int main() {
  int i, prime_count = 0;
  bool prime, duplicated;
  int res[SIZE], a[SIZE];
  printf("Nhap cac phan tu cua mang: (%i phan tu)\n", SIZE );
  for (i = 0; i < SIZE; i++) {
    printf("\nNhap phan tu thu %i: ",i+1 );
    scanf("%i",&a[i]);
  }
  for (i = 0; i < SIZE; i++) {
    if (a[i] <= 0 || a[i] == 1) {
      continue;
    } else {
      for (int temp = 2; temp <= a[i]/2; temp++) {
        prime = true;
        if (a[i]%temp == 0) {
          prime = false;
          break;
        }
      }
      if (prime || a[i] == 2 || a[i] == 3) {
        duplicated = false;
        for (int temp = 0; temp < SIZE; temp++) {
          if (res[temp] == a[i]) {
            duplicated = true;
          }
        }
        if (duplicated == false){
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
