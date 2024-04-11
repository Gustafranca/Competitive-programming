#include <stdio.h>

int main(){


    int num,resultado=0;
    scanf("%d",&num);

    for(int divisor=1; divisor<num;divisor++){
        if(num % divisor == 0){
            for (int j = 2; j <= divisor / 2; j++) {
                if (divisor % j == 0) {
                        resultado++;
                        break;
                    }
            }

            if (resultado == 0)
                printf("%d é um divisor primo\n", divisor);
            else
                printf("%d é um divisor nao primo\n", divisor);
            }
        }

}