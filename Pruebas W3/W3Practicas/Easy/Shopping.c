#include <stdio.h>

int main() {
    char item[100];
    double price;
    double total;
  	int quantity;
    scanf("%s", item);
    scanf("%lf", &price);
    scanf("%d", &quantity);
		total = quantity * price;	
  
  	printf("Item: %s\n",item);
  	printf("Price: $%1.2f\n",price);
  	printf("Quantity: %d\n",quantity);
  	printf("Total: $%1.2f\n",total);
  	
    return 0;
}