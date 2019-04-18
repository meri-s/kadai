#include<stdio.h>

void func1(int *p);	/* �v���g�^�C�v�錾 */	/* No.01�̊֐� */
void func2(int *p);	/* �v���g�^�C�v�錾 */	/* No.02�̊֐� */
void func3(int *p);	/* �v���g�^�C�v�錾 */	/* No.03�̊֐� */
void func4(int *p);	/* �v���g�^�C�v�錾 */	/* No.04�̊֐� */

void main(void) {
	int i1 = 0;		
	int i2 = 0;
	int i3 = 0;
	int i4 = 0;

	func1(&i1);		/* No.01�̊֐����Ăяo���Ă��� */	/* ���� i1 �̒l�F0 */
	i1 = 1;
	func1(&i1);		/* No.01�̊֐����Ăяo���Ă��� */	/* ���� i1 �̒l�F1 */


	func2(&i2);		/* No.02�̊֐����Ăяo���Ă��� */	/* ���� i2 �̒l�F0 */
	i2 = 1;
	func2(&i2);		/* No.02�̊֐����Ăяo���Ă��� */	/* ���� i2 �̒l�F1 */
	i2 = 2;
	func2(&i2);		/* No.02�̊֐����Ăяo���Ă��� */	/* ���� i2 �̒l�F2 */
	i2 = 3;
	func2(&i2);		/* No.02�̊֐����Ăяo���Ă��� */	/* ���� i2 �̒l�F3 */


	func3(&i3);		/* No.03�̊֐����Ăяo���Ă��� */	/* ���� i3 �̒l�F0 */


	func4(&i4);		/* No.04�̊֐����Ăяo���Ă��� */	/* ���� i4 �̒l�F0 */

	return;
}

/* No.01�̊֐� */
void func1(int *p) {
	if (*p == 0) {			/* p�̒l�� 0 �̏ꍇ */
		*p = 1;				/* p�� 1 ���i�[		*/
		printf("%d", *p);	/* p�̒l���o��		*/	
	}
	else {					/* p�̒l�� 1 �ȊO�̏ꍇ */
		*p = 2;				/* p�� 2 ���i�[			*/
		printf("%d", *p);	/* p�̒l���o��			*/
	}

	return;
}

/* No.02�̊֐� */
void func2(int *p) {
	switch (*p) {
	case 0:					/* p�̒l�� 0 �̏ꍇ */
		*p = 3;				/* p�� 3 ���i�[		*/
		printf("%d", *p);	/* p�̒l���o��		*/
		break;
	case 1:					/* p�̒l�� 1 �̏ꍇ */
		*p = 4;				/* p�� 4 ���i�[		*/
		printf("%d", *p);	/* p�̒l���o��		*/
		break;
	case 2:					/* p�̒l�� 2 �̏ꍇ */
		*p = 5;				/* p�� 5 ���i�[		*/
		printf("%d", *p);	/* p�̒l���o��		*/
		break;
	default:				/* p�̒l�� 0,1,2 �ȊO�̏ꍇ */
		*p = 6;				/* p��4 ���i�[				*/
		printf("%d", *p);	/* p�̒l���o��				*/
		break;
	}

	return;
}

/* No.03�̊֐� */
void func3(int *p) {
	for (*p = 7;*p <=10 ;(*p)++) {	/* p�̏����l�F7 */	/* p�̒l��10�ȉ��̏ꍇ ���[�v���� */	/* p�̒l���C���N�������g */
		printf("%d", *p);			/* p�̒l���o�� */
		if (*p == 10) {				
			break;					/* p�̒l�� 10 �̏ꍇ ���[�v�I�� */
		}
	}

	return;
}

/* No.04�̊֐� */
void func4(int *p) {
	*p = 11;
	while (*p <= 20) {		/* p�̒l��20�ȉ��̏ꍇ ���[�v���� */
		printf("%d", *p);	/* p�̒l���o�� */

		if (*p == 20) {
			break;			/* p�̒l�� 20 �̏ꍇ ���[�v�I�� */
		}

		(*p)++;				/* p�̒l���C���N�������g */
	}
	return;
}


#if 0
void func4(int *p) {
	while (*p <= 20) {		/* p�̒l��20�ȉ��̏ꍇ ���[�v���� */

		if (*p >= 11) {			/* p�̒l�� 11 �ȏ�̏ꍇ */
			printf("%d", *p);	/* p�̒l���o��			 */
		}

		if (*p == 20) {
			break;			/* p�̒l�� 20 �̏ꍇ ���[�v�I�� */
		}

		(*p)++;				/* p�̒l���C���N�������g */
	}
}
#endif
