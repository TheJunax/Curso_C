#include <stdio.h>

int sum(int k);

int main() {
  int result = sum(10);
  printf("La suma es: %d\n", result);
  return 0;
}

int sum(int k) {
	printf("Numero= %i\n",k);
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}