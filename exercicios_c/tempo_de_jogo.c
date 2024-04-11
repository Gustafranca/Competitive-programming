#include <stdio.h>
 
int main() {
 
    int h_i,m_i,h_f,m_f,ht_min,ht_i,ht_f,ht;
    
    scanf("%d%d%d%d",&h_i,&m_i,&h_f,&m_f);

    //conversao para min
    ht_i = (h_i*60) + m_i;
    ht_f = (h_f*60) + m_f;

    ht_min = (ht_f - ht_i);

    if(ht_min <= 0){
        ht_min += 24*60;
    }

    ht = ht_min / 60;
    ht_min %= 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",ht,ht_min);

 
    return 0;
}