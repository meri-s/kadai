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


void main(void) {
	func1();		/* No.1の関数を呼び出す */
	func2();		/* No.2の関数を呼び出す */
	func3();		/* No.3の関数を呼び出す */

	return;
}