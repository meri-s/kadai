#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
void main(void) {
	FILE *fp;
	char sBuf[256];

	fp = fopen("STEP_00-07.txt", "r");
	fgets(sBuf, 256, fp);
	printf("%s", sBuf);
	fclose(fp);

	return;
}