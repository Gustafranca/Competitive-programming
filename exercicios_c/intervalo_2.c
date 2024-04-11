#include <stdio.h>
 
int main() {
 
    int n,countin=0,countout=0,num;

    scanf("%d",&n);

    while(n != 0){
        scanf("%d",&num);
        if(num <= 20 && num >= 10){
            countin += 1;
        }else{
            countout += 1;
        }
        n--;    
    }
    printf("%d in\n", countin);
    printf("%d out\n",countout);

 
    return 0;
}