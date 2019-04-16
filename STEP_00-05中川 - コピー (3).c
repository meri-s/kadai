#include <stdio.h>
#include <memory.h>
#include <string.h>

int main(void) {
	char s1[11] = { 0 };
	char s2[15] = { 0 };
	char ss1[11] = { 0 };
	char ss2[15] = { 0 };
	char ss3[128] = { 0 };
	int i = 0;

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
	s1[10] = ' \0';

	sprintf(&(ss3[0]), "•Ï”‚Ì’l‚Í%d", i);

	return 0;
}