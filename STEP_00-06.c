#include<stdio.h>

void main(void) {
	int i = 0;
	int i2 = 0;
	char s[11] = { 0 };
	
	char inputBuffer[256] = { 0 };

	/*�P�̃v���O����*/
	i = 255;
	i2 = 255;
	s[0] = 0x82;
	s[1] = 0xa0;
	s[2] = 0x82;
	s[3] = 0xa2;
	s[4] = 0x82;
	s[5] = 0xa4;
	s[6] = 0x82;
	s[7] = 0xa6;
	s[8] = 0x82;
	s[9] = 0xa8;
	s[10] = '\0';

	printf("�ϐ��̒l��%d�ł��B\n", i);
	printf("�ϐ��̒l��0x%x�ł��B\n", i2);
	printf("�ϐ��̒l��%s�ł��B\n", &(s[0]));


	/*�Q�̃v���O����*/
	
	gets(&(inputBuffer[0]));

	printf("���͂��ꂽ�l��%s�ł��B",&(inputBuffer[0]));

	return;
}