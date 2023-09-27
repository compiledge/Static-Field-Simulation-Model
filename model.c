#include<stdio.h>
#include"model.h"

// help_menu() {{{
void help_menu(){
	printf("\t\t\t SIMULATION\n");
	printf("\nUSAGE:\n");
	printf("\t static [options]\n");

	printf("\nMODEL OPTIONS:\n");
	printf("\t-e, --export\t\t Exportar matriz de fields em .csv\n");
	printf("\t-l, --lambda <int>\t Valor de lambda para valor das diagonais\n");
	printf("\t-p, --panic <int>\t Probabilidade de pedestre entrar em pânico\n");
	printf("\t-r, --random <int>\t Quantidade de pedestres inseridos aleatoriamente\n");
	printf("\t-s, --seed <int>\t Valor do seed para os sorteios\n");
	printf("\t-S, --steps <int>\t Quantidade de passos na simulação\n");
	printf("\t-m, --map <path>\t Arquivo padronizado de mapa.\n");

	printf("\nMETA OPTIONS:\n");
	printf("\t-v, --verbose\t\t Imprimir informações adicionais\n");
	printf("\t-V, --version\t\t Imprimir a versão do programa\n");
	printf("\t-h, --help\t\t Imprimir menu de ajuda com opções\n");

	printf("\nEXAMPLE:\n");
	printf("./static --lambda 150 --panic 5 --random 3 --seed 0 --steps 77 --map exp/double-corridor.in\n");
}/*}}}*/
