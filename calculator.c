#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int code, resp;

void menu(void) {
	
	if (code == 1) {
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
		printf("Para operacoes como: fatorial, seno,\ncosseno, tangente, mod e log10.");
		printf("\nO segundo numero nao faz diferenca.\n\n > ");
	} else if (code == 2) {
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
		printf("For operations like: factorial, sen,\ncos, tan, mod, and log10.");
		printf("\nThe second number doesn't make a difference.\n\n > ");
	}
}

int result(float num1, float num2, char oper) {
	
	int num3 = 1;

	if (code == 1) {
		switch (oper) {
			case '+':
				printf("%f mais %f e igual a %f.\n\n", num1, num2, num1 + num2);
				break;
			case '-':
				printf("%f menos %f e igual a %f.\n\n", num1, num2, num1 - num2);
				break;
			case 'x':
				printf("%f vezes %f e igual a %f.\n\n", num1, num2, num1 * num2);
				break;
			case '/':
				if (num2 != 0) printf("%f dividido por %f e igual a %f.\n\n", num1, num2, num1 / num2);
				else 		   printf("Nenhum numero pode ser dividido por 0.\n\n");
				break;
			case 'm':
				printf("%d dividido por %d deixa resto %d.\n\n", (int)num1, (int)num2, (int)num1 % (int)num2);
				break;
			case '!':
				for (int i = 1; i <= num1; i++) num3 *= i;
				printf("%d fatorial e igual a %d.\n\n", (int)num1, num3);
				break;
			case 'r':
				printf("a raiz quadrada de %f e igual a %f.\n\n", num1, sqrt(num1));
				break;
			case 'l':
				printf("o log10 de %f e igual a %f.\n\n", num1, log10(num1));
				break;
			case 's':
				printf("o seno de %f e igual a %f.\n\n", num1, sin(num1));
				break;
			case 'c':
				printf("o cosseno de %f e igual a %f.\n\n", num1, cos(num1));
				break;
			case 't':
				printf("a tangente de %f e igual a %f.\n\n", num1, tan(num1));
				break;
			case 'p':
				printf("%f elevado a %f e igual a %f.\n\n", num1, num2, pow(num1, num2));
				break;
			default:
				printf("Apenas caracteres validos!\n\n");
				break;
		}
	} else if (code == 2) {
		switch (oper) {
			case '+':
				printf("%f plus %f is equal to %f.\n\n", num1, num2, num1 + num2);
				break;
			case '-':
				printf("%f minus %f is equal to %f.\n\n", num1, num2, num1 - num2);
				break;
			case 'x':
				printf("%f times %f is equal to %f.\n\n", num1, num2, num1 * num2);
				break;
			case '/':
				if (num2 != 0) printf("%f divided by %f is equal to %f.\n\n", num1, num2, num1 / num2);
				else 		   printf("No number can be divided by 0.\n\n");
				break;
			case 'm':
				printf("%d divided by %d remains %d.\n\n", (int)num1, (int)num2, (int)num1 % (int)num2);
				break;
			case '!':
				for (int i = 1; i <= num1; i++) num3 *= i;
				printf("%d factorial is equal to %d.\n\n", (int)num1, num3);
				break;
			case 'r':
				printf("The square root of %f is equal to %f.\n\n", num1, sqrt(num1));
				break;
			case 'l':
				printf("The log10 of %f is equal to %f.\n\n", num1, log10(num1));
				break;
			case 's':
				printf("The sen of %f is equal to %f.\n\n", num1, sin(num1));
				break;
			case 'c':
				printf("The cos of %f is equal to %f.\n\n", num1, cos(num1));
				break;
			case 't':
				printf("The tan of %f is equal to %f.\n\n", num1, tan(num1));
				break;
			case 'p':
				printf("%f raised to the power of %f is equal to %f.\n\n", num1, num2, pow(num1, num2));
				break;
			default:
				printf("Only valid characters!\n\n");
				break;
		}
	} 
}

int main(void) {

	system("cls || clear");
	
	float num1, num2;
	char oper;

	do {
		printf("Escolha o idioma | Choose the language\n\n");
		printf(" '1' : Portugues\n");
		printf(" '2' : English\n\n > ");

		scanf("%d", &code);
		fflush(stdin);
		system("cls || clear");
		resp = 0;

		if (code != 1 && code != 2) {
			printf("Escolha uma opcao valida | Choose a valid option");
			printf("\n\nPressione 1 para continuar | Press 1 to continue\n\n > ");
			scanf("%d", &resp);
			system("cls || clear");

			if (resp != 1) return 0;
		}
	} while (resp == 1);

	do {
		menu();

		int i = scanf("%f %c %f", &num1, &oper, &num2);
		system("cls || clear");

		if (i != 3) {
			fflush(stdin);
			if (code == 1)		printf("Apenas caracteres validos!\n\n");
			else if (code == 2)	printf("Only valid characters!\n\n");
		} else {
			result(num1, num2, oper);
		}

		if (code == 1)		printf("\nDeseja continuar? digite 1 para sim.\n\n > ");
		else if (code == 2) printf("\nDo you wish to continue? type 1 for yes.\n\n > ");
		
		scanf("%d", &resp);
		system("cls || clear");
	} while (resp == 1);

	return 0;
}
