#include <stdio.h>
#include <math.h>

int main() {
	printf("——实验上机demo01——\n——D自集成181-胡修智-234180423——\n");
	Password();
	return 0;
}

int Triangle_area() {
	double a, b, c, s, area;
	printf("请输入三角形三边长（以空格分隔）：\n");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	s = (a + b + c) / 2;
	area = sqrt(s *(s-a)* (s - b) * (s - c));
	printf("三角形面积为（取小数点后两位）:%.2lf\n", area);
	return 0;
}

int Password() {
	char a = 'C', b = 'h', c = 'i', d = 'n', e = 'a';
	printf("采用printf:%c%c%c%c%c\n", a+5, b+5, c+5, d+5, e+5);
	printf("采用putchar:");
	putchar(a + 5);
	putchar(b + 5);
	putchar(c + 5);
	putchar(d + 5);
	putchar(e + 5);
	putchar('\n');
	return 0;
}