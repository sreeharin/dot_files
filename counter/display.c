#include <stdio.h>
#include <stdlib.h>

#define file_path "/home/shn/Lab/C/counter/counter.txt"

int
main()
{
	FILE *tmp_file = fopen(file_path, "r");
	char tmp_time[5];
	fgets(tmp_time, 5, tmp_file);
	int tmp_time_sec = atoi(tmp_time);
	
	int min = (tmp_time_sec % (3600)) / 60;
	int sec = tmp_time_sec % 60;
	fclose(tmp_file);

	(tmp_time_sec == 0) ? printf("Break time!") :printf("%02d : %02d\n", min, sec);

	return 0;
}
