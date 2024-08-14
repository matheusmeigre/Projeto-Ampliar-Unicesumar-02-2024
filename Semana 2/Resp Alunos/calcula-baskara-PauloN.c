// Programa recebe os termos da equa��o de segundo grau
// E calcula as ra�zes que zeram a equa��o
// Informe o primeiro termo a, da equa��o
// A equa��o de segundo grau possui 3 termos o primeiro a, o segundo b e o terceiro c
// Ex: ax�+bx+c
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
int main (){
    setlocale(LC_ALL, "Portuguese");
    float primeiroTermo, segundoTermo, terceiroTermo, delta, primeiraRaiz, segundaRaiz;
    
    printf("Para encontrar a ra�z da equa��o quadr�tica formato ax�+bx+c, nos informe o valor dos termos a seguir. \n");

    printf("Insira o n�mero referente ao primeiro termo 'a'. Caso X� esteja sozinho digite 1: ");
    scanf("%f", &primeiroTermo);

    if(primeiroTermo!=0) {
    printf("Insira o n�mero referente ao segundo termo 'b'.\n Caso X esteja sozinho digite 1: ");
    scanf("%f", &segundoTermo);

    printf("Insira o n�mero referene ao terceiro termo 'c': ");
    scanf("%f", &terceiroTermo);

    
    delta = (segundoTermo*segundoTermo)-4*primeiroTermo*terceiroTermo;

    if(delta>0){
        primeiraRaiz = (-segundoTermo+sqrt(delta))/(2*primeiroTermo);
        segundaRaiz = (-segundoTermo-sqrt(delta))/(2*primeiroTermo);
        printf("Essa equa��o possui duas ra�zes reais. O valor de X' �: %.2f, e o valor de X'' �: %.2f", primeiraRaiz, segundaRaiz);
    }
    else if(delta<0){
        printf("N�o possui raiz real");
    }
    else {
        primeiraRaiz = (-segundoTermo+sqrt(delta))/(2*primeiroTermo);
        printf("O valor de X � %.2f", primeiraRaiz);
    }

} else{
    printf("O primeiro termo n�o pode ser igual a zero");
}

    return 0;
}