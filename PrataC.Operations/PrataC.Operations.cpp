#include <stdio.h>

#define OFFSET 7.67
#define SCALE 0.325

void main() {
	static char firstString[15] = "Shoes sizes";
	static char secondString[15] = "Feet sizes";

	float shoe = 3.0;
	float foot;

	printf("%20s %20s\n", firstString, secondString);

	while (shoe < 18.5) {
		foot = SCALE * shoe + OFFSET;
		printf("%20.2f %20.2f\n", shoe, foot);
		shoe = shoe + 1.0;
	}

	int Jane, tarzan, cheeta = tarzan = Jane = 68;

	int rocky = -12;
	int smokey = -rocky; //операция изменения знака

	//aplus = a++ - постфикс: переменная а изменяется после того как ее значение используется
	//plusb = ++b - префикс: переменная b изменяется перед тем как ее значение используется

	int y = 2;
	int n = 3;
	int nextnum = (y + n++) * 6;

	//Только после того как выражение вычислено, значение переменной
	//n увеличивается до 4. Старшинство операции говорит, что операция ++ имеет отношение 
	//только к n

	int result = 5 > 3; //result = 1
}