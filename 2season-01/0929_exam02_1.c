void teststatic() {
	//extern svar; 사용 안됨
	//svar = 5;
}
void testglobal() {
	extern gvar; // 전역변수 사용
	gvar = 10;
}