#include <stdio.h>
 
int main() {
 
    int num1, num2;

    scanf("%d %d",&num1, &num2);

    if(num1 < 0 || num1 > 432 || num2 < 0 || num2 > 468){
        printf("fora\n");
    }else{
        printf("dentro\n");
    }
 
    return 0;
}