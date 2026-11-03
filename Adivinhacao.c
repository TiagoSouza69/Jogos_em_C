#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define Numero_de_Tentativas 2

// Programa feito a partir do livro Intrudução a programação em c e seus primeiros passos
// 30/04/2026

int main(){
	printf("\n\n");
	printf("          P  /_\\  P                              \n");
	printf("         /_\\_|_|_/_\\                            \n");
	printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
	printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n", setlocale(LC_ALL,"Portuguese"));
	printf("    |\" \"  |  |_|  |\"  \" |                     \n");
	printf("    |_____| ' _ ' |_____|                         \n");
	printf("          \\__|_|__/                              \n");
	printf("\n\n");
srand(time(NULL));	
int i=1, numerogrande = rand(), numerosecreto = numerogrande % 100, chute, pontos = 1000, nivel, totaltentativas;
int escolha, ascii = 300;
    printf("*****************************************************************\n");
    printf("* Aqui você pode brincar a vontade! *	\n\n", setlocale(LC_ALL,"Portuguese"));
    printf("*****************************************************************\n");
    printf("Deseja jogar? Digite 1 para sim e 0 para não:\n", setlocale(LC_ALL,"Portuquese"));
	system("color D");
	scanf("%d", &escolha);
	if (escolha == 1){
	printf("Você tem de chute o número 0 até 100 para chutar\n", setlocale(LC_ALL,"Portuquese"));	
	printf("Escolha o nível de dificuldade:(1) Fácil você ganha 1R$, (2) Médio você ganha 5R$ e (3) Dificil você ganha 10R$ \n", setlocale(LC_ALL, "Portuguese"));
	printf("Escolha => ");
	scanf("%d", &nivel);
	switch(nivel){
	 case 1:
	 	totaltentativas = 20;
	 	break;
	 case 2:
	    totaltentativas = 10;
		break;
	 case 3:
	    totaltentativas = 5;
		break;
	 default:
	    printf ("Você optou por uma opção que não existe!\n Começe o jogo outra vez!!!", setlocale(LC_ALL, "Portuguese"));
	    sleep(5);
	    exit(0);	    					
	}
	for(i = 0 ; i <= totaltentativas; i++){
	printf("Tentativa %d\n", i);
	printf("------------------\n");
	printf("Qual o seu chute?\n ");
	scanf("%d", &chute);
	printf("Seu chute %d\n", chute);
	if(chute <0){
		printf("Não aceitamos nem números fracionários e nem negativos!!!\n", setlocale(LC_ALL,"Portuquese"));
		i--;
		continue;
	}
	if(chute == numerosecreto){
		printf("             OOOOOOOOOOO               \n");
		printf("         OOOOOOOOOOOOOOOOOOO           \n");
		printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
		printf("    OOOOOO      OOOOO      OOOOOO      \n");
		printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
		printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
		printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
		printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
		printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
		printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
		printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
		printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
		printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
		printf("         OOOOOO         OOOOOO         \n");
		printf("             OOOOOOOOOOOO              \n\n");
		printf("Parabéns, você acertou e ganhou 1000 pontos\n", setlocale(LC_ALL,"Portuguese"));
		printf("Jogue de novo, Você é um ótimo jogador\n\n", setlocale(LC_ALL,"Portuguese"));
		break;
	}else{
		int menor = chute < numerosecreto ;
		printf("Infelismente você errou\n", setlocale(LC_ALL,"Portuguese"));
		printf("Não desista, o jogo está apenas começando!!\n", setlocale(LC_ALL,"Portuguese"));
		if (menor){
			int pontosperdidos = (numerosecreto - chute);
			pontos = pontos - pontosperdidos;
			printf("Seu chute foi menor que o número secreto \n", setlocale(LC_ALL,"Portuguese"));
		}
		else{
			int pontosperdidos = (chute - numerosecreto) / 2;
		    pontos = pontos - pontosperdidos;
			printf("Seu chute foi maior que o número secreto \n", setlocale(LC_ALL,"Portuguese"));
		}
	}
	
}
        printf("      \\   *  *  /\n");
        printf("       \\   ^   / \n");
        printf("        \\__uu_/ \n\n");
        printf("Obrigado por jogar!");
}
    return 0;
}


