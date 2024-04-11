#include <stdio.h>
 
int main() {
 
  
    int dia_i, hora_i, min_i, seg_i;
    int dia_f,hora_f,min_f,seg_f;
    int hora_t, min_t,seg_t,dia_t;
    int temp_it, temp_ft, temp_t;
    

    scanf("Dia %d\n",&dia_i);
    scanf("%d : %d : %d\n",&hora_i,&min_i,&seg_i);
    scanf("Dia %d\n",&dia_f);
    scanf("%d : %d : %d",&hora_f,&min_f,&seg_f);


    temp_it = (dia_i*86400) + (hora_i*3600) + (min_i*60) + seg_i;
    temp_ft = (dia_f*86400) + (hora_f*3600) + (min_f*60) + seg_f;
    
    temp_t = temp_ft - temp_it;

    dia_t = temp_t / 86400;
     
    hora_t = (temp_t - (dia_t*86400)) / 3600;
    
    min_t = (temp_t - (dia_t*86400) - (hora_t*3600)) / 60;
    
    // seg_t = (temp_t - (dia_t*86400) - (hora_t*3600) - (min_t*60)) / 60;

    if(seg_f < seg_i){
        seg_t = (seg_f+60) - seg_i;
    }else{
        seg_t = (seg_f - seg_i);

    }
    
    printf("%d dia(s)\n",dia_t);
    printf("%d hora(s)\n",hora_t);
    printf("%d minuto(s)\n",min_t);
    printf("%d segundo(s)\n",seg_t);
 
    return 0;
}