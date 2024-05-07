#include <stdio.h>
 
int main() {
 
    float maior =0, menor=11, nota_atual=0, nota_anterior=0, soma=0;
    for(int i = 0;i < 5; i++){
        scanf("%f",&nota_atual);
        if(nota_atual > maior){
            maior = nota_atual;
        }if(nota_atual < menor){
            menor = nota_atual;
        }
        nota_anterior = nota_atual; 
        soma += nota_atual;
    }
    soma = soma - (maior + menor);
    printf("%.1f",soma);
    return 0;
}