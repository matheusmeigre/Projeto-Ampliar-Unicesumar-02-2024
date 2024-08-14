//Programa calcula sal�rio recebe o valor do sal�rio e o c�digo referente a sua fun��o
// A tabela a seguir apresenta os cargos e seus respectivos aumentos:

//   C�digos        |         Cargo           |      Aumento
//     1                   Desenvolvedor Java           30%
//     2                   Analista de Redes            25%
//     3                   Arquiteto DevOps             50%
//     4                   T�cnico de Suporte           13%

// Cargo: \n Sal�rio atual \n Aumento \n Novo Sal�rio:
#include <stdio.h>
#include <locale.h>



int main(){
    setlocale(LC_ALL, "Portuguese");
    float salario, aumentoProporcional, novoSalario, aumentoPorcentagem;
    char nome[40];
    char cargo[40];
    int codigo;

    printf("Digite o seu nome: ");
    // scanf("%40s", nome);
    fgets(nome, 40, stdin);

    printf("Ol� %s! Escolha o c�digo referente ao seu cargo: \n 1 - Desenvolvedor Java\n 2 - Analista de Redes \n 3 - Arquiteto DevOps \n 4 - T�cnico de Suporte \n Insira o c�digo: ", nome);
    scanf("%i", &codigo);
    
    //Nessa parte o switch case vai coletar a informa��o do cargo e definir o valor da porcentagem do aumento. Esses valores ser�o usados a seguir.
    switch (codigo){
        case 1:
        aumentoPorcentagem = 0.30;
        strcpy(cargo, "Desenvolvedor Java");
        break;
        
        case 2:
        aumentoPorcentagem = 0.25;
        strcpy(cargo, "Analista de Redes");
        break;

        case 3:
        aumentoPorcentagem = 0.5;
        strcpy(cargo, "Arquiteto DevOps");
        break;

        case 4:
        aumentoPorcentagem = 0.13;
        strcpy(cargo, "T�cnico de Suporte");
        break; 

        default:
        printf("Opera��o inv�lida");
    }

    if(codigo<=4){
        
        printf("%s, digite o seu sal�rio: ", nome);
        scanf("%f", &salario);
        
        //Aqui � feito o calculo do aumento
        aumentoProporcional = salario*aumentoPorcentagem;
        novoSalario = salario+aumentoProporcional;

        // Precisa dar sa�da no nome, cargo, aumento e sal�rio com aumento.
        printf("%s, o seu aumento salarial � de %.2f, e o seu novo sal�rio � de: %.2f", nome, aumentoProporcional, novoSalario);
    }
    


    return 0;
}