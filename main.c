#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE* fp;
	char str[100];
	
	fp =fopen("sample.txt","w");
	printf("input a word:");
	scanf("%s", str);
	fprintf(fp, "%s", str);
	fclose(fp);
	

}