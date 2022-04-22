#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

#define file_path "/home/shn/Lab/C/counter/counter.txt"
#define time 45*60 

void *count_down();
void write_to_file(int);
int read_from_file();
/* void *break_time(); */

int 
main()
{
	pthread_t thread1, thread2;
	pthread_create(&thread1, NULL, count_down, NULL);
	pthread_join(thread1, NULL);
	/* pthread_create(&thread2, NULL, break_time, NULL); */
	/* pthread_join(thread2, NULL); */

	return 0;
}

void * 
count_down()
{
	/* printf("Started count down for %d seconds\n", time); */

	for(int sec = time; sec >= 0; sec--)
	{
		write_to_file(sec);
		sleep(1);
	}
	return NULL;
}

void
write_to_file(int sec)
{
	FILE *tmp_file = fopen(file_path, "w");
	fprintf(tmp_file, "%d", sec);
	fclose(tmp_file);
}

int
read_from_file()
{
	FILE *tmp_file = fopen(file_path, "r");
	char tmp_time[5];
	fgets(tmp_time, 5, tmp_file);
	fclose(tmp_file);

	int tmp_time_in_sec = atoi(tmp_time);
	return tmp_time_in_sec;
}

/* void * */
/* break_time() */
/* { */
/* 	int tmp = read_from_file(); */
/* 	if(tmp == 0) */
/* 	{ */
/* 		printf("Break time!\n"); */
/* 	} */
/* 	return NULL; */
/* } */
