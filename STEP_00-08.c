/* No.1�̊֐� */
void func1(void);	/*�v���g�^�C�v�錾*/

/* No.2�̊֐� */
int func2(void);	/*�v���g�^�C�v�錾*/

/* No.3�̊֐� */
char* func3(void);	/*�v���g�^�C�v�錾*/


void main(void) {
	func1();		/* No.1�̊֐����Ăяo�� */
	func2();		/* No.2�̊֐����Ăяo�� */
	func3();		/* No.3�̊֐����Ăяo�� */

	return;
}


/* No.1�̊֐� */
void func1(void) {
	return;
}

/* No.2�̊֐� */
int func2(void) {
	return 255;
}

/* No.3�̊֐� */
char* func3(void) {
	return "����������";
}
