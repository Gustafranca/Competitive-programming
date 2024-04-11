#include <stdio.h>
 
int main() {
 
int n,num,countcoelho=0,countrato=0,countsapo=0,counttotal=0;
char tipo;
float pcoelho, prato, psapo;
scanf("%d",&n);

    while(n!=0){
        scanf("%d %c",&num,&tipo);
        switch (tipo)
        {
        case 'C':
            countcoelho += num;
            counttotal += num;
            break;
        case 'R':
            countrato += num;
            counttotal += num;
            break;

        default:
            countsapo += num;
            counttotal += num;
            break;
        }
        n--;
    }
    printf("Total: %d cobaias\n", counttotal);
    printf("Total de coelhos: %d\n", countcoelho);
    printf("Total de ratos: %d\n", countrato);
    printf("Total de sapos: %d\n", countsapo);

    pcoelho = ((float)countcoelho / counttotal)*100;
    prato = ((float)countrato / counttotal)*100;
    psapo = ((float)countsapo / counttotal)*100;

    printf("Percentual de coelhos: %.2f %%\n",pcoelho);
    printf("Percentual de ratos: %.2f %%\n", prato);
    printf("Percentual de sapos: %.2f %%\n", psapo);

 
    return 0;
}