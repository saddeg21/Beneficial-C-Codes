#include <stdio.h>
#include <string.h>

int main() {
	int number;
	char name[13];
	char surname[13];
	char title[13];
	FILE* fp;
	fp = fopen("example.csv","w");
	
	printf("Provide a number:\t");
	scanf("%d",&number);
	printf("Provide a name:\t");
	scanf("%12s",&name);
	printf("Provide a surname:\t");
	scanf("%12s",&surname);
	printf("Provide a title: \t");
	scanf("%12s",&title);
	
	fprintf(fp,"%d,%s,%s,%s",number,name,surname,title);
	
	printf("\n SUCCESS \n");
	system("pause");
	return 0;
}
