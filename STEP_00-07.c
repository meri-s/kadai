#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
void main(void) {
	FILE *fp=NULL;
	char sBuf[256] = { 0 };

	/*１のプログラム*/
	fp = fopen("STEP_00-07.txt", "r");
	fgets(&(sBuf[0]),sizeof(sBuf), fp);		/*STEP_00-07.txtを1行読み込み*/
	printf("%s", &(sBuf[0]));
	fclose(fp);

	/*２のプログラム*/
	fp = fopen("STEP_00-07.txt", "a");
	fputs("追加", fp);
	fclose(fp);

	return;
}