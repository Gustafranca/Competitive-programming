#include <stdio.h>
 
int main() {
 
    int a, b, c, temp;

    scanf("%d%d%d",&a,&b,&c);

    int v[] = {a,b,c};


    if(a>b){
        temp = a;
        a = b;
        b = temp;
    }
    if(a>c){
        temp = a;
        a = c;
        c = temp;
    }
    if(b>c){
        temp = b;
        b = c;
        c = temp;
    }


    printf("%d\n%d\n%d\n",a,b,c);
    printf("\n");
    printf("%d\n%d\n%d\n",v[0],v[1],v[2]);
 
    return 0;
}