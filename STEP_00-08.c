#include<stdio.h>

/* No.1�̊֐� */
void func1(void);	/*�v���g�^�C�v�錾*/

/* No.2�̊֐� */
int func2(void);	/*�v���g�^�C�v�錾*/

/* No.3�̊֐� */
char* func3(void);		/*�v���g�^�C�v�錾*/


void main(void) {
	int a = 0;			/* func2 �߂�l�m�F�p�ϐ� */
	char *b = NULL;		/* func3 �߂�l�m�F�p�ϐ� */

	func1();			/* No.1�̊֐����Ăяo�� */
	a = func2();		/* No.2�̊֐����Ăяo�� */
	b = func3();		/* No.3�̊֐����Ăяo�� */

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
