// values_to_variables
#include <stdio.h>

main() {


	char data = 'A';											///
	int value = 10;												///
	long int tax = 3.5L;										/// ประกาศตัวแปรพร้อมกับกำหนดค่าเริ่มต้นให้กับตัว.
	double pi = 3.1415926536;									///	Declare variables and assign them initial values.
	float average = 3.1416f;							        ///
	unsigned long int number = 30678LU;							///



	char data;		///
	int value;		/// ประกาศตัวแปรก่อน จากนั้นจึงกำหนดค่า ให้กับตัวแปลภายหลัง.
	data = 'A';		///	Declare variables first Then configure to the translator later.
	value = 10;		///


	int valuel, value2 = 0;	// ทำการประกาศตัสแปร value1 และ value2 ขื้นมาใช้งาน,โดยกำหนดค่าเริ่มต้นให้กับตัวแปล value2 เป็น 0
							            // แต่ไม่มีการกำหนดค่าเริ่มต้นให้กัยตัวแปร value1
}

*// I created it for When I go to study and I don't understand I can still come back to understand. //*


// การทำงานของตัวแปรแบบโกลบอลและโลคอล. How global and local variables work
int i = 1;

int testVar(int j) {
	int n = 3;
	return n * j;
}

main() {
	int m;
	printf("Globlal variable i is %d\n", i);
	m = testVar(i);
	// Variable n is not accessible here
	// m = m * n;
	printf("Local variable m is %d\n", m);
}
