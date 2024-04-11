#include <stdio.h>
#include <math.h>

int main(){

int n=1,contador=1,temp;
    while(1){
        scanf("%d",&n);
        temp =0;
        if(n==0){
            break;
        }
        printf("Teste %d\n",contador);
            while (n>0)
            {
                int j,z;
                scanf("%d %d",&j,&z);
                temp = temp + (j - z);
                printf("%d\n", temp);
                n--;
            }
        printf("\n");
        contador++;

    }
    return 0;

}









