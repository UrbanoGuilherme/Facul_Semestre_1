#include <stdio.h>

float CalculoMassa(float a, float b){

    float mA = 321.43, mB = 150.72;
    
    printf("mol A : mol B\n");
    printf("1.2 : 1.0 = %fg\n", (1.2*mA)+(1.0*mB));
    printf("1.4 : 1.0 = %fg\n", (1.4*mA)+(1.0*mB));
    printf("1.0 : 1.6 = %fg\n", (1.0*mA)+(1.6*mB));

    return (a*mA)+(b*mB);
}

int main (){

    float a, b, resultado;

    printf("Digite o valor de mols do composto A e do composto B:");   //O codigo digitado no AVA possui um erro conceitual.
    scanf("%f e %f", &a, &b);                                          //Usuario deve entrar num de mols

    resultado = CalculoMassa(a,b);

    printf("O número final de massa(g): %.2f ", resultado);
    
    return 0; 
}