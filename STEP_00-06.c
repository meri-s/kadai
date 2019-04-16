#include<stdio.h>

void main(void) {
	int i = 0;
	int i2 = 0;
	char s[11] = { 0 };
	
	char inputBuffer[256] = { 0 };

	/*１のプログラム*/
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

	printf("変数の値は%dです。\n", i);
	printf("変数の値は0x%xです。\n", i2);
	printf("変数の値は%sです。\n", &(s[0]));


	/*２のプログラム*/
	
	gets(&(inputBuffer[0]));

	printf("入力された値は%sです。",&(inputBuffer[0]));

	return;
}