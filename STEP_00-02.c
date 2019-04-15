void main(void) {
	int i;
	unsigned int ui;
	short h;
	unsigned short uh;	
	unsigned int ui16;

	i = 2147483647;			/*int型の最大値 (10進数)*/
	i = -2147483648;		/*int型の最小値 (10進数)*/

	ui = 4294967295;		/*unsigned int型の最大値 (10進数)*/
	ui = 0;					/*unsigned int型の最小値 (10進数)*/

	h = 32767;				/*short型の最大値 (10進数)*/
	h = -32768;				/*short型の最小値 (10進数)*/

	uh = 65535;				/*unsigned short型の最大値 (10進数)*/
	uh = 0;					/*unsugned short型の最小値 (10進数)*/

	ui16 = 0xffffffff;		/*unsigned int型の最大値 (16進数)*/
	ui16 = 0x00;				/*unsigned int型の最小値 (16進数)*/

	return;
}