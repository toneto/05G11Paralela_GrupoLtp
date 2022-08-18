#include <stdlib.h>

int main(void){
    float n1, n2, n3, me, ma;

    printf("Digite a N1: ");
    scanf("%f", &n1);

    printf("Digite a N2: ");
    scanf("%f", &n2);

    printf("Digite a N3: ");
    scanf("%f", &n3);

    printf("Digite a Me: ");
    scanf("%f", &me);

    ma = (n1 + n2*2 + n3*3 + me)/7.0;

    if(ma>=9){
        printf("A");
    }
    else if(ma>=7.5){
        printf("B");
    }
    else if(ma>=6){
        printf("C");
    }
    else if(ma>=4){
        printf("D");
    }
    else{
        printf("E");
    }
    return 0;
}