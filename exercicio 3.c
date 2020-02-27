#include<stdio.h>
#include<math.h>
int main(){
    double i1, i2, i3;
    double p1, p2, p3;
    double mediaI, mediaP;
    printf("Digite a idade da pessoa 1: ");
    scanf("%lf", &i1);
    printf("Digite o peso da pessoa 1: ");
    scanf("%lf", &p1);
    printf("Digite a idade da pessoa 2: ");
    scanf("%lf", &i2);
    printf("Digite o peso da pessoa 2: ");
    scanf("%lf", &p2);
    printf("Digite a idade da pessoa 3: ");
    scanf("%lf", &i3);
    printf("Digite o peso da pessoa 3: ");
    scanf("%lf", &p3);
    mediaI = (i1+i2+i3)/3;
    mediaP = (p1+p2+p3)/3;
    printf("A media de idade das tres pessoas e: %lf", mediaI);
    printf("A media de peso das tres pessoas e: %lf", mediaP);
    return(0);
}
