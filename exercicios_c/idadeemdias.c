#include <stdio.h>
 
int main() {
 
    int dias,ano,mes,ano_r,mes_r,dia_r;
    ano = 365;
    mes = 30;
    scanf("%d",&dias);

    ano_r = dias / ano;
    dias = dias - (ano*ano_r);
    mes_r = dias / mes;
    dia_r = (dias%mes);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano_r,mes_r,dia_r);

 
    return 0;
}