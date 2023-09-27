#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<unistd.h>
#include<getopt.h>

#include"model.h"

int main(int argc, char **argv){

	tp_options args;
	args.steps = 0;
	args.seed = 0;
	args.curve_flag = 0;
	args.noex_flag = 0;
	args.fix_flag = 0;
	args.dump_flag = 0;
	args.verbose_flag = 0;

	while(1) {
		static struct option long_options[] = {

			/* Main options sended by CLI */
			{"curve",	no_argument,       0, 'c'},
			{"dump",		no_argument,       0, 'd'},
			{"fixed",	no_argument,       0, 'f'},
			{"help",		no_argument,       0, 'h'},
			{"noex",		no_argument,       0, 'x'},
			{"lambda",	required_argument, 0, 'l'},
			{"map",		required_argument, 0, 'm'},
			{"panic",	required_argument, 0, 'p'},
			{"random",	required_argument, 0, 'r'},
			{"seed",		required_argument, 0, 's'},
			{"steps",	required_argument, 0, 'S'},
			{"verbose",no_argument, 0, 'v'},
			{0, 0, 0, 0}
		};

		/* getopt_long stores the option index here. */
		int option_index = 0;

		args.op = getopt_long (argc, argv, "cdfhl:m:p:r:s:S:vx",
				long_options, &option_index);

		/* Detect the end of the options. */
		if(args.op == -1)
			break;

		switch(args.op){
			case 0:
				/* If this option set a flag, do nothing else now. */
				if (long_options[option_index].flag != 0)
					break;
				printf ("option %s", long_options[option_index].name);
				if (optarg)
					printf (" with arg %s", optarg);
				printf ("\n");
				break;

			case 'c':
				args.curve_flag = 1;
				break;

			case 'd':
				args.dump_flag = 1;
				break;

			case 'f':
				args.fix_flag = 1;
				break;

			case 'l':
				args.lambda = atoi(optarg);
				break;

			case 'h':
				help_menu();
				exit(1);

			case 'm':
				strcpy(args.map, optarg);
				break;

			case 'p':
				args.panic = atoi(optarg);
				break;

			case 'r':
				args.random = atoi(optarg);
				break;

			case 's':
				args.seed = atoi(optarg);
				break;

			case 'S':
				args.steps = atoi(optarg);
				break;

			case 'v':
				args.verbose_flag = 1;
				break;

			case 'x':
				args.noex_flag = 1;
				break;

			case '?':
				/* getopt_long already printed an error message. */
				break;

			default:
				abort ();
		}
	}

	/* Setting the seed to rand:
	 * if the seed is zero, seed receives the time function
	 * */
	if(args.seed)
		srand(args.seed);
	else
		srand(time(NULL));

	/* Simulation flow */
	tp_simulation *xp = NULL;

	// xp = create_simulation(args);
	//
	// calc_static_field(xp);
	//
	// exec_simulation(xp);
	//
	// destroy_simulation(xp);

	return EXIT_SUCCESS;
}
