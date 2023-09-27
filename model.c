#include<stdio.h>
#include"model.h"

// help_menu() {{{
void help_menu(){
	printf("\t\tSIMULATION\n");
	printf("\nUSAGE:\n");
	printf("\t static [options]\n");

	printf("\nFLAG OPTIONS:\n");
	printf("\t-c, --curve\t\t Get around obstacles\n");
	printf("\t-d, --dump\t\t Export the dump file\n");
	printf("\t-e, --emoji\t\t Display emojis\n");
	printf("\t-g, --greed\t\t Greedy behaviour\n");
	printf("\t-n, --no-ex\t\t Prevent useless diagonal movements\n");
	printf("\t-v, --verbose\t\t Display the entire simulation\n");

	printf("\nINPUT OPTIONS:\n");
	printf("\t-l, --lambda <int>\t Diagonal rate\n");
	printf("\t-p, --panic <int>\t Panic rate\n");
	printf("\t-r, --random <int>\t Number of random pedestrians inserted\n");
	printf("\t-s, --seed <int>\t Seed value\n");
	printf("\t-S, --steps <int>\t Number of time steps\n");
	printf("\t-m, --map <path>\t Input map\n");

	printf("\nMETA OPTIONS:\n");
	printf("\t-V, --version\t\t Software version\n");
	printf("\t-h, --help\t\t Print this menu\n");

}/*}}}*/
