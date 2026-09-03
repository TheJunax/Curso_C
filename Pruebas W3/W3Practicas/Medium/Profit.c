#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Escriba los dias: ");
    scanf("%d", &n);
    int prices[100000];
    printf("Escriba el precio de la accion por cada dia: \n");
    for (int i = 0; i < n; i++) scanf("%d", &prices[i]);
    int profit=prices[1] - prices[0], buy = 1, sell =2;
    for(int i =0; i<n; i++){
        for(int j=0; j<n;j++){
            if(i > j){
                if(profit < (prices[i] - prices[j])){
                    profit = (prices[i] - prices[j]);
                    buy = j+1;
                    sell = i+1;
                }
            }
        }
    }
    if(profit <0){
        profit =0;
        buy =0;
        sell=0;
    }
    printf("Profit: %d || Buy day: %d || Sell day: %d\n", profit, buy, sell);
    return 0;
}
