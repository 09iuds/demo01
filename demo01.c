#include <stdio.h>
#include <math.h>

int main() {
	printf("����ʵ���ϻ�demo01����\n����D�Լ���181-������-234180423����\n");
	nav();
	return 0;
}

int nav() {
	printf("�����������C����ʵ���ϻ�һ�����ĵ���Ŀ��");
	printf("\n1�����������\n2��China����\n3�������¶�\n4��Բ��\n\n\n�����������ֺ�������˳�\n");
	int a = 1;
	printf("������Ų鿴������Ŀ��");
	scanf_s("%d", &a);
	if (a == 1) {
		Triangle_area();
	}
	else if (a == 2) {
		Password();
	}
	else if (a == 3) {
		Celsius();
	}
	else if (a == 4) {
		circle();
	}
	else {
		return 0;
	}
}


int Triangle_area() {
	double a, b, c, s, area;
	printf("���������������߳����Կո�ָ�����\n");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	s = (a + b + c) / 2;
	area = sqrt(s *(s-a)* (s - b) * (s - c));
	printf("���������Ϊ��ȡС�������λ��:%.2lf\n", area);
	printf("����0������ѡ��ҳ:");
	int na;
	scanf_s("%d", &na);
	if (na == 0) {
		nav();
	}
	return 0;
}

int Password() {
	char a = 'C', b = 'h', c = 'i', d = 'n', e = 'a';
	printf("���ԭ����:%c%c%c%c%c\n", a, b, c, d, e);
	printf("����printf:%c%c%c%c%c\n", a+5, b+5, c+5, d+5, e+5);
	printf("����putchar:");
	putchar(a + 5);
	putchar(b + 5);
	putchar(c + 5);
	putchar(d + 5);
	putchar(e + 5);
	putchar('\n');
	printf("����0������ѡ��ҳ:");
	int na;
	scanf_s("%d", &na);
	if (na == 0) {
		nav();
	}
	return 0;
}

int Celsius() {
	int c, f = 100;
	c = 5 * ((f - 32) / 9);
	printf("�����¶�Ϊ%d�H\n�����¶�Ϊ%d��\n", f, c);
	printf("����0������ѡ��ҳ:");
	int na;
	scanf_s("%d", &na);
	if (na == 0) {
		nav();
	}
	return 0;
}

int circle() {
	double r, h, zc, mj, bmj, ytj, tj;
	double pi = 3.14;
	printf("������뾶�͸�:\n");
	scanf_s("%lf %lf", &r, &h);
	zc = 2 * pi * r;
	printf("�뾶:%.2lf,��:%.2lf.\n", r, h);
	printf("\nԲ�ܳ�Ϊ:%.2lf\n", zc);
	mj = pow(r, 2) * pi;
	printf("Բ���Ϊ:%.2lf\n", mj);
	bmj = 4 * mj;
	printf("Բ������Ϊ:%.2lf\n", bmj);
	ytj = (4 / 3) * pi * pow(r, 3);
	printf("Բ�����Ϊ:%.2lf\n", ytj);
	tj = pi * pow(r, 2) * h;
	printf("Բ�����Ϊ:%.2lf\n", tj);
	printf("����0������ѡ��ҳ:");
	int na;
	scanf_s("%d", &na);
	if (na == 0) {
		nav();
	}
	return 0;
}