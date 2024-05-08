#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int qnumeros, numeros, i, letras, qletrasm, qletrasma, maiusculas, minusculas, simbolos, qsimbolos, soma, escolha, senha, caracter, senhal, senha2;
float result;
int main()
{
	srand (time(NULL));
	
	printf ("------------GERADOR DE SENHAS PERSONALIZADAS------------\n\n\n");
	
	printf ("Gerar senha totalmente aleatoria ou personalizar? \n\n1- Aleatoria \n2- Personalizar\n");
	scanf ("%d", &escolha);
	
	if (escolha == 1){
		
		system ("cls");

		printf ("------------SENHAS GERADAS------------\n\n");

		for (i = 0 ; i < 2 ; i++){
			
			senha = rand() % 9;
			printf ("%d", senha);
			
			senhal = rand() % 26 + 97;
			printf ("%c", senhal);

			senha2 = rand() % 26 + 65;
			printf ("%c", senha2);
			
			do{

				qsimbolos = rand() % 26 + 33;

			}while(qsimbolos == 44 || qsimbolos > 47|| qsimbolos == 40 || qsimbolos == 41);
			printf ("%c", qsimbolos);
		}
		printf ("\n");
		for (i = 0 ; i < 2 ; i++){

			senha2 = rand() % 26 + 65;
			printf ("%c", senha2);

			senhal = rand() % 26 + 97;
			printf ("%c", senhal);

			senha = rand() % 9;
			printf ("%d", senha);
			do{

				qsimbolos = rand() % 26 + 33;

			}while(qsimbolos == 44 || qsimbolos > 47 || qsimbolos == 40 || qsimbolos == 41);
			printf ("%c", qsimbolos);			
		}
		printf ("\n");
		for (i = 0 ; i < 2 ; i++){

			senhal = rand() % 26 + 97;
			printf ("%c", senhal);

			senha = rand() % 9;
			printf ("%d", senha);

			senha2 = rand() % 26 + 65;
			printf ("%c", senha2);	

			do{

				qsimbolos = rand() % 26 + 33;

			}while(qsimbolos == 44 || qsimbolos > 47 || qsimbolos == 40 || qsimbolos == 41);
			printf ("%c", qsimbolos);			
		}
		printf ("\n");
		for (i = 0 ; i < 2 ; i++){

			do{

				qsimbolos = rand() % 26 + 33;

			}while(qsimbolos == 44 || qsimbolos > 47 || qsimbolos == 40 || qsimbolos == 41);
			printf ("%c", qsimbolos);

			senha2 = rand() % 26 + 65;
			printf ("%c", senha2);	

			senha = rand() % 9;
			printf ("%d", senha);

			senhal = rand() % 26 + 97;
			printf ("%c", senhal);
		}
		printf ("\n\n");
		system ("pause");
		return 0;
	}
	else if (escolha == 2){
		
		system ("cls");
		printf ("Quantos numeros? ");
		scanf ("%d", &numeros);
		printf ("Quantas letras? ");
		scanf ("%d", &letras);	
		
		if (letras > 0){
			printf ("Quantas maiusculas? ");
			scanf ("%d", &maiusculas);
			
			printf ("Quantas minusculas? ");
			scanf ("%d", &minusculas);
			
		}
		printf ("Quantos simbolos? ");
		scanf ("%d", &simbolos);
		
		soma = maiusculas + minusculas;
		
		if (soma > letras || soma < letras){
			
			printf ("\nNumeros informados invalidos!\n\n");
			system ("pause");
			return 0;
		}
		else{

			printf ("Escolha invalida!");
			system ("pause");
			return 0;
			
		}
		if (maiusculas < 0 || minusculas < 0 || letras < 0 || simbolos < 0 || numeros < 0){

			printf ("\nNumeros informados invalidos!\n\n");
			system ("pause");
			return 0;

		}
		system ("cls");
		printf ("------------SENHAS GERADAS------------\n\n");

		for (i = 0 ; i < numeros ; i++){
			
			qnumeros = rand() % 9;
			printf ("%d", qnumeros);
			
		}
		
		for (i = 0 ; i < minusculas ; i++){
			
			qletrasm = rand() % 26 + 97;
			printf ("%c", qletrasm);
			
		}
		
		for (i = 0 ; i < maiusculas ; i++){
			
			qletrasma = rand() % 26 + 65;
			printf ("%c", qletrasma);
			
		}
		
		for (i = 0 ; i < simbolos ; i++){
			
			do{
			
				qsimbolos = rand() % 26 + 33;
		}while(qsimbolos == 44 || qsimbolos > 47 || qsimbolos == 40 || qsimbolos == 41);
			
			printf ("%c", qsimbolos);
			
		}

		// OPÇÃO 2

		printf ("\n");
		for (i = 0 ; i < maiusculas ; i++){
			
			qletrasma = rand() % 26 + 65;
			printf ("%c", qletrasma);
			
		}

		for (i = 0 ; i < numeros ; i++){
			
			qnumeros = rand() % 9;
			printf ("%d", qnumeros);
			
		}

		for (i = 0 ; i < simbolos ; i++){
			
			do{
			
				qsimbolos = rand() % 26 + 33;
		}while(qsimbolos == 44 || qsimbolos > 47 || qsimbolos == 40 || qsimbolos == 41);
			
			printf ("%c", qsimbolos);
		}
		for (i = 0 ; i < minusculas ; i++){
			
			qletrasm = rand() % 26 + 97;
			printf ("%c", qletrasm);
			
		}
	

	// OPÇÃO 3
		printf ("\n");

		for (i = 0 ; i < simbolos ; i++){
			
			do{
			
				qsimbolos = rand() % 26 + 33;
		}while(qsimbolos == 44 || qsimbolos > 47 || qsimbolos == 40 || qsimbolos == 41);
			
			printf ("%c", qsimbolos);
		}

		for (i = 0 ; i < minusculas ; i++){
			
			qletrasm = rand() % 26 + 97;
			printf ("%c", qletrasm);
			
		}

		for (i = 0 ; i < numeros ; i++){
			
			qnumeros = rand() % 9;
			printf ("%d", qnumeros);
			
		}


		for (i = 0 ; i < maiusculas ; i++){
			
			qletrasma = rand() % 26 + 65;
			printf ("%c", qletrasma);
			
		}

	// OPÇÃO 4
		printf ("\n");
		for (i = 0 ; i < minusculas ; i++){
			
			qletrasm = rand() % 26 + 97;
			printf ("%c", qletrasm);
			
		}

		for (i = 0 ; i < simbolos ; i++){
			
			do{
			
				qsimbolos = rand() % 26 + 33;
		}while(qsimbolos == 44 || qsimbolos > 47 || qsimbolos == 40 || qsimbolos == 41);
			
			printf ("%c", qsimbolos);
		}


		for (i = 0 ; i < maiusculas ; i++){
			
			qletrasma = rand() % 26 + 65;
			printf ("%c", qletrasma);
			
		}

		for (i = 0 ; i < numeros ; i++){
			
			qnumeros = rand() % 9;
			printf ("%d", qnumeros);
			
		}

	printf ("\n\n");
	system ("pause");
	return 0;
	}
	else{

		printf ("Escolha invalida!");

	}

}