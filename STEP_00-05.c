#define _CRT_SECURE_NO_WARNINGS


#include<string.h>
#include<stdio.h>

void main(void) {

	/*�P�̕ϐ�*/
	char ss1[11] = { 0 };
	char ss2[15] = { 0 };

	char s1[11] = { 0 };
	char s2[15] = { 0 };

	/*�Q�̕ϐ�*/
	char ss3[128] = { 0 };
	int i=0;

	/*�P�̃v���O����*/

	s1[0] = 0x30;
	s1[1] = 0x31;
	s1[2] = 0x32;
	s1[3] = 0x33;
	s1[4] = 0x34;
	s1[5] = 0x35;
	s1[6] = 0x36;
	s1[7] = 0x37;
	s1[8] = 0x38;
	s1[9] = 0x39;
	s1[10] = '\0';

	s2[0] = 0x61;
	s2[1] = 0x62;
	s2[2] = 0x63;
	s2[3] = 0x64;
	s2[4] = 0x65;
	s2[5] = 0x66;
	s2[6] = 0x67;
	s2[7] = 0x68;
	s2[8] = 0x69;
	s2[9] = 0x6a;
	s2[10] = 0x6b;
	s2[11] = 0x6c;
	s2[12] = 0x6d;
	s2[13] = 0x6e;
	s2[14] = '\0';

	memcpy(ss1, s1, 11);
	strcpy(ss2, s2);


	/*�Q�̃v���O����*/

	i = 10;

	sprintf(ss3, "�ϐ��̒l��%d", i);

	return;
}