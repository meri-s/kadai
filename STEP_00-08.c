#include<stdio.h>

/* No.1の関数 */
void func1(void);	/*プロトタイプ宣言*/

/* No.2の関数 */
int func2(void);	/*プロトタイプ宣言*/

/* No.3の関数 */
char* func3(void);		/*プロトタイプ宣言*/


void main(void) {
	int a = 0;			/* func2 戻り値確認用変数 */
	char *b = NULL;		/* func3 戻り値確認用変数 */

	func1();			/* No.1の関数を呼び出す */
	a = func2();		/* No.2の関数を呼び出す */
	b = func3();		/* No.3の関数を呼び出す */

	return;
}


/* No.1の関数 */
void func1(void) {
	return;
}

/* No.2の関数 */
int func2(void) {
	return 255;
}

/* No.3の関数 */
char* func3(void) {
	return "あいうえお";
}
