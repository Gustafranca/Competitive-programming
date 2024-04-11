#include <stdio.h>
 
int main() {
 
int seg, hora, min;

    scanf("%d",&seg);
    hora = seg / 3600; 
    min = (seg % 3600) / 60;
    seg = seg % 60;



    printf("%d:%d:%d\n",hora,min,seg);
    return 0;
}