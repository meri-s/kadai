#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
void main(void) {
	FILE *fp=NULL;
	char sBuf[256] = { 0 };

	/*�P�̃v���O����*/
	fp = fopen("STEP_00-07.txt", "r");
	fgets(&(sBuf[0]),sizeof(sBuf), fp);		/*STEP_00-07.txt��1�s�ǂݍ���*/
	printf("%s", &(sBuf[0]));
	fclose(fp);

	/*�Q�̃v���O����*/
	fp = fopen("STEP_00-07.txt", "a");
	fputs("�ǉ�", fp);
	fclose(fp);

	return;
}