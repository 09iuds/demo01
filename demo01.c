#include <stdio.h>
#include <math.h>

int main() {
	printf("����ʵ���ϻ�demo01����\n����D�Լ���181-������-234180423����\n");
	Password();
	return 0;
}

int Triangle_area() {
	double a, b, c, s, area;
	printf("���������������߳����Կո�ָ�����\n");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	s = (a + b + c) / 2;
	area = sqrt(s *(s-a)* (s - b) * (s - c));
	printf("���������Ϊ��ȡС�������λ��:%.2lf\n", area);
	return 0;
}

int Password() {
	char a = 'C', b = 'h', c = 'i', d = 'n', e = 'a';
	printf("����printf:%c%c%c%c%c\n", a+5, b+5, c+5, d+5, e+5);
	printf("����putchar:");
	putchar(a + 5);
	putchar(b + 5);
	putchar(c + 5);
	putchar(d + 5);
	putchar(e + 5);
	putchar('\n');
	return 0;
}