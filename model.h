#define WALL 500
#define clrscr() printf("\e[1;1H\e[2J")

struct options{
	int op;
	int lambda;
	char map[100];
	int panic;
	int random;
	int seed;
	int steps;
	int curve_flag;
	int noex_flag;
	int fix_flag;
	int dump_flag;
	int verbose_flag;
};
typedef struct options tp_options;

struct simulation{
	int qt_walkers;		// number of pedestrians
	int qt_exits;			// number of exits
	int qt_cells;			// number of free cells 
	int qt_max_cells;		// maximum number of cells

	int lines;				// number of lines in map
	int columns;			// number of columns in map

	float **map_room;		// floor field map
	int **map_walkers;	// pedestrian map
	int **xy_walkers;		// pedestrian coordinates
	int **xy_exits;		// exit coordinates

	int *z_exits;			// unified coordinate exit cells
	short *tp_walkers;	// unified coordinate pedestrian cells

	int qt_steps;			// maximum time steps
	float tx_lambda;		// diagonal rate
	float tx_panic;		// panic rate

	// Flags
	int curve_flag;		// Get around obstacles
	int noex_flag;			// Prevents useless diagonal movements
	int fix_flag;			// Greedy behaviour
	int dump_flag;			// Print the entire simulation in the dump file
	int verbose_flag;		// Display the entire simulation
	int emoji_flag;		// Print emojis

};
typedef struct simulation tp_simulation;


void help_menu();
