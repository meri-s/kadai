#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include"STEP_00-09.h"		/* STEP_00-09�w�b�_�[�t�@�C�����C���N���[�h */

void main(void) {
	int i = 111;
	char s[32] = { "������" };

	func1(255);			/* No.1�̊֐����Ăяo�� */	/* 255��n���Ă��� */
	func2('x');			/* No.2�̊֐����Ăяo�� */	/* 'x'��n���Ă��� */
	func3(&i);			/* No.3�̊֐����Ăяo�� */	/* i�̃A�h���X��n���Ă��� */
	func4(&(s[0]));		/* No.4�̊֐����Ăяo�� */	/* �z��s�̐擪�A�h���X��n���Ă��� */

	return;
}

/* No.1�̊֐� */
void func1(int a) {
	printf("%d", a);

	return;
}

/* No.2�̊֐� */
void func2(char a) {
	printf("%c", a);

	return;
}

/* No.3�̊֐� */
void func3(int *p) {
	*p = 999;

	return;
}

/* No.4�̊֐� */
void func4(char *p) {
	strcpy(&(p[0]), "������");

	return;
}