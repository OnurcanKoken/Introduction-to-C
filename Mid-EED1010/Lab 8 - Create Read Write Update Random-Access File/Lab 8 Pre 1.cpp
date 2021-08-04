#include <stdio.h>
#define SIZE 20

int main()
{
	double f_1, f_2;
	int i_1, i_2;
	FILE *file_pointer;
	char file_name[SIZE] = "mydata.txt";
	
	file_pointer = fopen(file_name,"w");
	fprintf(file_pointer,"%f %f %d %d", 23.556, -76e5, 76, 5);
	
	fclose(file_pointer);
	
	file_pointer = fopen(file_name, "r");
	fscanf(file_pointer,"%lf %lf %d %d",&f_1, &f_2, &i_1, &i_2);
	
	fclose(file_pointer);
	
	printf("First output = %f\n",f_1);
	printf("Second output = %f\n",f_2);
	printf("Third output = %d\n",i_1);
	printf("Fourth output = %d\n",i_2);
	
	return 0;
}
