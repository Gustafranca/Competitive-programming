#include <stdio.h>
#include <math.h>

int main(){

int n=1,contador=1,temp;
    while(1){
        scanf("%d",&n);

        if(n==0){
            break;
        }
        temp = 0;
        int a,b,countaldo=0, countbeto=0;
        printf("Teste %d\n",contador);
            while (n>0)
            {
                scanf("%d %d",&a,&b);
                countaldo = countaldo + a;
                countbeto = countbeto +b;
                n--;
            }
        if(countaldo > countbeto){
                printf("Aldo\n");
        }else{
                printf("Beto\n");
            }
        printf("\n");
        contador++;

    }
    return 0;

}









