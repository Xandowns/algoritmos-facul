#include<stdio.h>
#include<conio.h>
int main(){
    float num[10];
    int i;
    for (i=0;i<10;i++){
        printf("Entre com o numero %i: ",i+1);
        scanf("%f", &num[i]);
    }
    for(i=9; i>=-9; i--){
        printf("O numero e: %f\n", num[i]);
    }
    return(0);
}
