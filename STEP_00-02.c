void main(void) {
	int i;
	unsigned int ui;
	short h;
	unsigned short uh;	
	unsigned int ui16;

	i = 2147483647;			/*int�^�̍ő�l (10�i��)*/
	i = -2147483648;		/*int�^�̍ŏ��l (10�i��)*/

	ui = 4294967295;		/*unsigned int�^�̍ő�l (10�i��)*/
	ui = 0;					/*unsigned int�^�̍ŏ��l (10�i��)*/

	h = 32767;				/*short�^�̍ő�l (10�i��)*/
	h = -32768;				/*short�^�̍ŏ��l (10�i��)*/

	uh = 65535;				/*unsigned short�^�̍ő�l (10�i��)*/
	uh = 0;					/*unsugned short�^�̍ŏ��l (10�i��)*/

	ui16 = 0xffffffff;		/*unsigned int�^�̍ő�l (16�i��)*/
	ui16 = 0x00;				/*unsigned int�^�̍ŏ��l (16�i��)*/

	return;
}