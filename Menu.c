#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <windows.h>


int main(){

int op;

printf("Escolha qual joguinho você quer jogar:\n", setlocale(LC_ALL, "portuguese"));
printf("Aperte 1 para o jogo de advinhação, 2 para o jogo da forca e 0 caso queira encerrar este menu: \n", setlocale(LC_ALL, "portuguese"));
scanf("%d", op);
switch(op){
	case 1:
	 system("C:\\Users\\TSS\\Desktop\\programas em C\\Jogos do livro\\Adivinhacao.exe");
	case 2:
	 system("Forca.exe");
	case 0:
	exit(0);
	default:
	printf("Opção invailida, saindo do programa...");
	exit(0)	;
}	
	return 0;
}
