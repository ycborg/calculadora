#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Ultima atualização: 08/03/23

int main(void) {
        float num1, num2, a;
        int resp, code, num3 = 1, fat = 1;
        char oper;

        do{
                printf("Escolha o idioma | Choose the language\n\n");

                printf(" '1' : Portugues\n");
                printf(" '2' : English\n\n > ");

                scanf("%d", &code);
                system("cls || clear");

                if (code == 1) {
                        do {
                                printf("\t\tCalculadora\n\n");

                                printf("Operacoes disponiveis:\n");
                                printf(" '+' : adicao\n");
                                printf(" '-' : subtracao\n");
                                printf(" 'x' : multiplicao\n");
                                printf(" '/' : divisao\n");
                                printf(" 'm' : mod\n");
                                printf(" 'p' : potenciacao\n");
                                printf(" 'r' : raiz quadrada\n");
                                printf(" '!' : fatorial\n");
                                printf(" 's' : seno\n");
                                printf(" 'c' : cosseno\n");
                                printf(" 't' : tangente\n");
                                printf(" 'l' : log10\n");

                                printf("\nDigite a expressao na forma: numero operador numero\n");
                                printf("Por exemplo: 1 + 1 , 2.1 p 3.1\n\n");
                                printf("Para operacoes como: fatorial, seno,\ncosseno, tangente e log10. \nO segundo numero nao faz diferenca.\n\n > ");

                                scanf("%f", &num1);
                                scanf("%c", &oper);
                                scanf("%f", &num2);

                                system("cls || clear");

                                switch( oper ) {
                                        case '+':
                                                printf("%.4f mais %.4f é igual a %.4f.\n\n", num1, num2, num1 + num2);
                                        break;
                                        case '-':
                                                printf("%.4f menos %.4f é igual a %.4f.\n\n", num1, num2, num1 - num2);
                                        break;
                                        case 'x':
                                                printf("%.4f vezes %.4f é igual a %.4f.\n\n", num1, num2, num1 * num2);
                                        break;
                                        case '/':
                                                if (num2 != 0) {
                                                        printf("%.4f dividido por %.4f é igual a %.4f.\n\n", num1, num2, num1 / num2);
                                                } else;
                                                        printf("Nenhum numero pode ser dividido por 0.\n\n");
                                        break;
                                        case 'm':
                                                printf("%d dividido por %d deixa resto %d.\n\n", (int)num1, (int)num2, (int)num1 % (int)num2);
                                        break;
                                        case '!':
                                                fat = 1, num3 = 1;
                                                for(; fat <= num1; fat++) {
                                                        num3 *= fat;
                                                }
                                                printf("%d fatorial é igual a %d.\n\n", (int)num1, (int)num3);
                                        break;
                                        case 'r':
                                                a = sqrt(num1);
                                                printf("a raiz quadrada de %f é igual a %.4f.\n\n", num1, a);
                                        break;
                                        case 'l':
                                                a = log10(num1);
                                                printf("o log10 de %d é igual a %.4f.\n\n", (int)num1, a);
                                        break;
                                        case 's':
                                                a = sin(num1);
                                                printf("o seno de %f é igual a %.4f.\n\n", num1, a);
                                        break;
                                        case 'c':
                                                a = cos(num1);
                                                printf("o cosseno de %f é igual a %.4f.\n\n", num1, a);
                                        break;
                                        case 't':
                                                a = tan(num1);
                                                printf("a tangente de %f é igual a %.4f.\n\n", num1, a);
                                        break;
                                        case 'p':
                                                a = pow(num1, num2);
                                                printf("%f elevado a %f é igual a %.4f.\n\n", num1, num2, a);
                                        break;
                                        default:
                                                printf("Apenas caracteres validos!\n\n");
                                        break;
                                }

                                printf("\ndeseja continuar? digite 1 para sim.\n\n > ");
                                scanf("%d", &resp);
                                system("clear");
                        }
                        while(resp==1);
                        return 0;
                } else if (code == 2) {
                        do {
                                printf("\t\tCalculator\n\n");

                                printf("Available operations:\n");
                                printf(" '+' : adition\n");
                                printf(" '-' : subtraction\n");
                                printf(" 'x' : multiplication\n");
                                printf(" '/' : division\n");
                                printf(" 'm' : mod\n");
                                printf(" 'p' : potentiation\n");
                                printf(" 'r' : square root\n");
                                printf(" '!' : factorial\n");
                                printf(" 's' : sen\n");
                                printf(" 'c' : cos\n");
                                printf(" 't' : tan\n");
                                printf(" 'l' : log10\n");

                                printf("\nType the operation as: number operator number\n");
                                printf("For exemple: 1 + 1 , 2.1 p 3.1\n\n");
                                printf("For operations like: factorial, sen,\ncos, tan and log10. \nThe second number doesn't make a difference.\n\n > ");

                                scanf("%f", &num1);
                                scanf("%c", &oper);
                                scanf("%f", &num2);

                                system("cls || clear");

                                switch( oper ) {
                                        case '+':
                                                printf("%.4f plus %.4f is equal to %.4f.\n\n", num1, num2, num1 + num2);
                                        break;
                                        case '-':
                                                printf("%.4f minus %.4f is equal to %.4f.\n\n", num1, num2, num1 - num2);
                                        break;
                                        case 'x':
                                                printf("%.4f times %.4f is equal to %.4f.\n\n", num1, num2, num1 * num2);
                                        break;
                                        case '/':
                                                if(num2 != 0) {
                                                        printf("%.4f divided by %.4f is equal to %.4f.\n\n", num1, num2, num1 / num2);
                                                } else 
                                                        printf("No number can be divided by 0.\n\n");
                                        break;
                                        case 'm':
                                                printf("%d divided by %d remains %d.\n\n", (int)num1, (int)num2, (int)num1 % (int)num2);
                                        break;
                                        case '!':
                                                fat = 1, num3 = 1;
                                                for(; fat <= num1; fat++) {
                                                        num3 *= fat;
                                                }
                                                printf("%d factorial is equal to %d.\n\n", (int)num1, (int)num3);
                                        break;
                                        case 'r':
                                                a = sqrt(num1);
                                                printf("The square root of %f is equal to %.4f.\n\n", num1, a);
                                        break;
                                        case 'l':
                                                a = log10(num1);
                                                printf("The log10 of %d is equal to %.4f.\n\n", (int)num1, a);
                                        break;
                                        case 's':
                                                a = sin(num1);
                                                printf("The sen of %f is equal to %.4f.\n\n", num1, a);
                                        break;
                                        case 'c':
                                                a = cos(num1);
                                                printf("The cos of %f is equal to %.4f.\n\n", num1, a);
                                        break;
                                        case 't':
                                                a = tan(num1);
                                                printf("The tan of %f is equal to %.4f.\n\n", num1, a);
                                        break;
                                        case 'p':
                                                a = pow(num1, num2);
                                                printf("%f raised to the power of %f is equal to %.4f.\n\n", num1, num2, a);
                                        break;
                                        default:
                                                printf("Only valid characters!\n\n");
                                        break;
                                }

                                printf("\nDo you wish to continue? type 1 for yes.\n\n > ");
                                scanf("%d", &resp);
                                system("clear");
                        }
                        while(resp==1);
                        return 0;
                } else {
                        printf("Escolha uma opcao valida | Choose a valid option");
                        printf("\n\nPressione 1 para continuar | Press 1 to continue\n\n > ");
                        scanf("%d", &resp);
                        system("clear");
                }
        }
        while(resp == 1);
        return 0;
}

