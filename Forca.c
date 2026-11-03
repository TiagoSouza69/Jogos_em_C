#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int enforcou();
void abertura();
void chuta();

char palavrasecreta[20];
char chutes[26];
int tentativas = 0;
int jachutou(char letra);
int ganhou();
void desenhaforca();
void escolhepalavra();
void desenho();

int enforcou() {

	int erros = 0;

	for(int i = 0; i < tentativas; i++) {
		
		int existe = 0;

		for(int j = 0; j < strlen(palavrasecreta); j++) {
			if(chutes[i] == palavrasecreta[j]) {
				existe = 1;
				break;
			}
		}

		if(!existe) erros++;
		 if(erros == 11){
		 	desenho();
		 }
	}
         
	return erros >= 11;
}

void abertura() {
		printf("/***************************************************************************************/\n");
	printf("/ Jogo de Forca */\n");
	printf("/ Vocês só possuem 12 chances */\n", setlocale(LC_ALL,"Portuguese"));
	printf("Dica: Foi esposa do cangaceiro mais famoso do nordeste e foi decapitada que nem o seu marido\n");
	printf("/*******************************************************************************************/\n\n");
}

void chuta() {
	char chute;
	printf("Qual a letra?\n ");
	scanf(" %c", &chute);

	chutes[tentativas] = chute;
	
}

int jachutou(char letra) {
	int achou = 0;
	for(int j = 0; j < tentativas; j++) {
		if(chutes[j] == letra) {
			achou = 1;
			break;
		}
	}

	return achou;
}
int ganhou() {
	for(int i = 0; i < strlen(palavrasecreta); i++) {
		if(!jachutou(palavrasecreta[i])) {
			return 0;
		}
	}

	return 1;
}

void desenhaforca() {
    printf("Você já deu %d chutes\n", tentativas, setlocale(LC_ALL,"Portuguese"));

	for(int i = 0; i < strlen(palavrasecreta); i++) {

		if(jachutou(palavrasecreta[i])) {
			printf("%c ", palavrasecreta[i]);
		} else {
			printf("_ ");
		}

	}
	printf("\n");

}

void escolhepalavra() {
	sprintf(palavrasecreta, "MariaBonita");
}

void desenho(){
	system("color 02");
	FILE* f;
	f = fopen("desenho.txt", "r") ;
	if (f == NULL){
		printf("Erro ao abrir o arquivo!");
	}
	char linha[10];
    while (fgets(linha, sizeof(linha), f) != NULL) {
        printf("%s", linha);
    }

    // 4. Fecha o arquivo
    fclose(f);
    exit(0);
}

int main() {

	int acertou = 0;

	abertura();
	escolhepalavra();

	do {

		desenhaforca();
		chuta();
		
		tentativas++;

	} while (!ganhou() && !enforcou());

    printf("%s\n ", palavrasecreta);
    printf("Parabéns! Você foi o grande campeão!!!!!\n");
    system("color 07");
        printf("       ___________      \n");
		printf("      '._==_==_=_.'     \n");
		printf("      .-\\:      /-.    \n");
		printf("     | (|:.     |) |    \n");
		printf("      '-|:.     |-'     \n");
		printf("        \\::.    /      \n");
		printf("         '::. .'        \n");
		printf("           ) (          \n");
		printf("         _.' '._        \n");
		printf("        '-------'       \n\n");
}


