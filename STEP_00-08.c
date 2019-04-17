void func1(void) {
	return;
}

int func2(void) {
	return 255;
}

char *func3(void) {
	return "‚ ‚¢‚¤‚¦‚¨";
}

void main(void) {
	func1();
	func2();
	func3();

	return;
}