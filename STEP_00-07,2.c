#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
void main(void) {
	FILE *fp;

	fp = fopen("STEP_00-07.txt", "a");
	fputs("’Ç‰Á", fp);
	fclose(fp);

	return;
}