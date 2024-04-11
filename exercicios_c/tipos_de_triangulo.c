#include <stdio.h>
 
int main() {
 

    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    // retangulo 

    if(a >= b+c || b >= a+c || c >= a+b){
        printf("NAO FORMA TRIANGULO\n");
    }else if(pow(a,2) == (pow(b,2) + pow(c,2)) || pow(b,2) == pow(a,2)+ pow(c,2) || pow(c,2) == pow(b,2)+ pow(a,2)){
        printf("TRIANGULO RETANGULO\n");
    }else if(pow(a,2) > (pow(b,2) + pow(c,2)) || pow(b,2) > pow(a,2)+ pow(c,2) || pow(c,2) > pow(b,2)+ pow(a,2)){
        printf("TRIANGULO OBTUSANGULO\n");
    }else if(pow(a,2) < (pow(b,2) + pow(c,2)) || pow(b,2) < pow(a,2)+ pow(c,2) || pow(c,2) < pow(b,2) + pow(a,2)){
        printf("TRIANGULO ACUTANGULO\n");
    }if(a==b && a != c || b == c && a != b || a == c && c != b){ 
        printf("TRIANGULO ISOSCELES\n");
    }else if(a == b && b == c){
        printf("TRIANGULO EQUILATERO\n");
    }
    
    
    return 0;
}