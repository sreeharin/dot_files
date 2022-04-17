#include <stdio.h>

int
main(int argc, char **argv)
{
	for(int i = 1; i < argc; i++){
		(argv[i][0] != '.') ? printf(" %s ", argv[i]) : 0 ; 
	}
	return 0;
}
