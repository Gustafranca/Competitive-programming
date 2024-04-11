#include <stdio.h>
 
int main() {
 
    int valor;

    int notas[] = {100,50,20,10,5,2,1};
    int qnt_notas[6] = {};
    scanf("%d",&valor);
    printf("%d\n",valor);
    int i = 0;
    while(i <= 6){
        qnt_notas[i] = valor / notas[i];
        valor %= notas[i];
        i++;
    }
    printf("%d nota(s) de R$ 100,00\n", qnt_notas[0]);
    printf("%d nota(s) de R$ 50,00\n", qnt_notas[1]);
    printf("%d nota(s) de R$ 20,00\n", qnt_notas[2]);
    printf("%d nota(s) de R$ 10,00\n", qnt_notas[3]);
    printf("%d nota(s) de R$ 5,00\n", qnt_notas[4]);
    printf("%d nota(s) de R$ 2,00\n", qnt_notas[5]);
    printf("%d nota(s) de R$ 1,00\n", qnt_notas[6]);
    return 0;
}