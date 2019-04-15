#include<stdio.h>

void main(void) {
	int *pi=NULL;
	char *ps=NULL;

	int i=0;
	char s[16] = { 0 };

	i = 0xff;
	pi = &i;

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
	ps = &(s[0]);

	return;
}