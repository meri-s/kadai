#include<stdio.h>

void func1(int *p);	/* プロトタイプ宣言 */	/* No.01の関数 */
void func2(int *p);	/* プロトタイプ宣言 */	/* No.02の関数 */
void func3(int *p);	/* プロトタイプ宣言 */	/* No.03の関数 */
void func4(int *p);	/* プロトタイプ宣言 */	/* No.04の関数 */

void main(void) {
	int i1 = 0;		
	int i2 = 0;
	int i3 = 0;
	int i4 = 0;

	func1(&i1);		/* No.01の関数を呼び出している */	/* 引数 i1 の値：0 */
	i1 = 1;
	func1(&i1);		/* No.01の関数を呼び出している */	/* 引数 i1 の値：1 */


	func2(&i2);		/* No.02の関数を呼び出している */	/* 引数 i2 の値：0 */
	i2 = 1;
	func2(&i2);		/* No.02の関数を呼び出している */	/* 引数 i2 の値：1 */
	i2 = 2;
	func2(&i2);		/* No.02の関数を呼び出している */	/* 引数 i2 の値：2 */
	i2 = 3;
	func2(&i2);		/* No.02の関数を呼び出している */	/* 引数 i2 の値：3 */


	func3(&i3);		/* No.03の関数を呼び出している */	/* 引数 i3 の値：0 */


	func4(&i4);		/* No.04の関数を呼び出している */	/* 引数 i4 の値：0 */

	return;
}

/* No.01の関数 */
void func1(int *p) {
	if (*p == 0) {			/* pの値が 0 の場合 */
		*p = 1;				/* pに 1 を格納		*/
		printf("%d", *p);	/* pの値を出力		*/	
	}
	else {					/* pの値が 1 以外の場合 */
		*p = 2;				/* pに 2 を格納			*/
		printf("%d", *p);	/* pの値を出力			*/
	}

	return;
}

/* No.02の関数 */
void func2(int *p) {
	switch (*p) {
	case 0:					/* pの値が 0 の場合 */
		*p = 3;				/* pに 3 を格納		*/
		printf("%d", *p);	/* pの値を出力		*/
		break;
	case 1:					/* pの値が 1 の場合 */
		*p = 4;				/* pに 4 を格納		*/
		printf("%d", *p);	/* pの値を出力		*/
		break;
	case 2:					/* pの値が 2 の場合 */
		*p = 5;				/* pに 5 を格納		*/
		printf("%d", *p);	/* pの値を出力		*/
		break;
	default:				/* pの値が 0,1,2 以外の場合 */
		*p = 6;				/* pに4 を格納				*/
		printf("%d", *p);	/* pの値を出力				*/
		break;
	}

	return;
}

/* No.03の関数 */
void func3(int *p) {
	for (*p = 7;*p <=10 ;(*p)++) {	/* pの初期値：7 */	/* pの値が10以下の場合 ループする */	/* pの値をインクリメント */
		printf("%d", *p);			/* pの値を出力 */
		if (*p == 10) {				
			break;					/* pの値が 10 の場合 ループ終了 */
		}
	}

	return;
}

/* No.04の関数 */
void func4(int *p) {
	*p = 11;
	while (*p <= 20) {		/* pの値が20以下の場合 ループする */
		printf("%d", *p);	/* pの値を出力 */

		if (*p == 20) {
			break;			/* pの値が 20 の場合 ループ終了 */
		}

		(*p)++;				/* pの値をインクリメント */
	}
	return;
}


#if 0
void func4(int *p) {
	while (*p <= 20) {		/* pの値が20以下の場合 ループする */

		if (*p >= 11) {			/* pの値が 11 以上の場合 */
			printf("%d", *p);	/* pの値を出力			 */
		}

		if (*p == 20) {
			break;			/* pの値が 20 の場合 ループ終了 */
		}

		(*p)++;				/* pの値をインクリメント */
	}
}
#endif
