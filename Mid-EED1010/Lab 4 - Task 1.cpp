#include <stdio.h>
#include <conio.h>

int main(){
	
	double Byte, KB, MB, GB, TB;
	printf("Please enter a MB value=");
	scanf("%lf",&MB);
	printf("1 MB is equal to:\n");
	printf("------------------------------\n");
	
	Byte = MB*1048576;
	KB = MB*1024;
	GB = MB/1024;
	TB = GB/1024;
	
	printf("1 MB =   %10.3e Byte\n",Byte);
	printf("1 MB =   %10.3e KB\n",KB);
	printf("1 MB =   %10g MB\n",MB);
	printf("1 MB =   %10.3e GB\n",GB);
	printf("1 MB =   %10.3e TB\n",TB);
	
	getch();
	return 0;
}
