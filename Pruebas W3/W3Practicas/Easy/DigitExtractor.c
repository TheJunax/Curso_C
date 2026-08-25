#include <stdio.h>

int main() {
    int n, hundreds,tens,ones;
    scanf("%d", &n);
    hundreds = n/100;
    ones = n %10;
    tens = (n %100) - ones;
    tens = tens / 10;
	
  	printf("Hundreds: %d\n", hundreds);
	printf("Tens: %d\n", tens);
	printf("Ones: %d\n", ones);
  	
  return 0;
}