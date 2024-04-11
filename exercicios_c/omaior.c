#include <stdio.h>
 
int main() {
 
int a,b,c,maiorab,maiortodo;

scanf("%d%d%d",&a,&b,&c);

maiorab = (a+b+abs(a-b))/2;

maiortodo = (maiorab+c+abs(maiorab-c))/2;

printf("%d eh o maior\n",maiortodo);


 
    return 0;
}