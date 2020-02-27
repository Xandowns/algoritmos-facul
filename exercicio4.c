#include<stdio.h>
#include<math.h>
int main(){
    double d,c,consumo;
    printf("Digite a distancia percorrida: ");
    scanf("%lf", &d);
    printf("Digite o valor do combustivel consumido: ");
    scanf("%lf", &c);
    consumo = d/c;
    printf("O km/l e: %lf", consumo);
    return (0);
}
