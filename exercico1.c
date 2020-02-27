#include<stdio.h>
#include<math.h>
int main(){
    double l1,l2,l3,p,a;
    printf("Digite o valos do lado 1: ");
    scanf("%lf", &l1);
    printf("Digite o valos do lado 2: ");
    scanf("%lf", &l2);
    printf("Digite o valos do lado 3: ");
    scanf("%lf", &l3);
    p = (l1+l2+l3)/2;
    a = sqrt(p*(p-l1)*(p-l2)*(p-l3));
    printf("O valor da area e: %lf", a);
    return(0);
}
