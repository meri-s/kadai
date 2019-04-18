#include<stdio.h>
#include"STEP_00-09.h"		/* STEP_00-09ヘッダーファイルをインクルード */

void main(void) {
	int i = 111;
	char s[32] = { "あいう" };

	func1(255);			/* No.1の関数を呼び出す */	/* 255を渡している */
	func2('x');			/* No.2の関数を呼び出す */	/* 'x'を渡している */
	func3(&i);			/* No.3の関数を呼び出す */	/* iのアドレスを渡している */
	func4(&(s[0]));		/* No.4の関数を呼び出す */	/* 配列sの先頭アドレスを渡している */

	return;
}

/* No.1の関数 */
void func1(int a) {
	printf("%d", a);

	return;
}

/* No.2の関数 */
void func2(char a) {
	printf("%c", a);

	return;
}

/* No.3の関数 */
void func3(int *p) {
	*p = 999;

	return;
}

/* No.4の関数 */
void func4(char *p) {
	p[0] = 0x82;		/* 2byte文字'か'の 1byte目 */
	p[1] = 0xa9;		/* 2byte文字'か'の 2byte目 */
	p[2] = 0x82;		/* 2byte文字'き'の 1byte目 */
	p[3] = 0xab;		/* 2byte文字'き'の 2byte目 */
	p[4] = 0x82;		/* 2byte文字'く'の 1byte目 */
	p[5] = 0xad;		/* 2byte文字'く'の 2byte目 */
	p[6] = '\0';		/* 終端 */

	return;
}