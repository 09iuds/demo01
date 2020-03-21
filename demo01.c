#include <stdio.h>
#include <math.h>

int main() {
	printf("——实验上机demo01——\n——D自集成181-胡修智-234180423——\n");
	nav();
	return 0;
}

int nav() {
	printf("本程序包含《C语言实验上机一》的四到题目：");
	printf("\n1、三角形面积\n2、China密码\n3、摄氏温度\n4、圆。\n\n\n输入其他数字后任意键退出\n");
	int a = 1;
	printf("输入题号查看程序，题目：");
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
	printf("请输入三角形三边长（以空格分隔）：\n");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	s = (a + b + c) / 2;
	area = sqrt(s *(s-a)* (s - b) * (s - c));
	printf("三角形面积为（取小数点后两位）:%.2lf\n", area);
	printf("输入0，返回选择页:");
	int na;
	scanf_s("%d", &na);
	if (na == 0) {
		nav();
	}
	return 0;
}

int Password() {
	char a = 'C', b = 'h', c = 'i', d = 'n', e = 'a';
	printf("输出原密码:%c%c%c%c%c\n", a, b, c, d, e);
	printf("采用printf:%c%c%c%c%c\n", a+5, b+5, c+5, d+5, e+5);
	printf("采用putchar:");
	putchar(a + 5);
	putchar(b + 5);
	putchar(c + 5);
	putchar(d + 5);
	putchar(e + 5);
	putchar('\n');
	printf("输入0，返回选择页:");
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
	printf("华氏温度为%d℉\n摄氏温度为%d℃\n", f, c);
	printf("输入0，返回选择页:");
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
	printf("请输入半径和高:\n");
	scanf_s("%lf %lf", &r, &h);
	zc = 2 * pi * r;
	printf("半径:%.2lf,高:%.2lf.\n", r, h);
	printf("\n圆周长为:%.2lf\n", zc);
	mj = pow(r, 2) * pi;
	printf("圆面积为:%.2lf\n", mj);
	bmj = 4 * mj;
	printf("圆球表面积为:%.2lf\n", bmj);
	ytj = (4 / 3) * pi * pow(r, 3);
	printf("圆球体积为:%.2lf\n", ytj);
	tj = pi * pow(r, 2) * h;
	printf("圆柱体积为:%.2lf\n", tj);
	printf("输入0，返回选择页:");
	int na;
	scanf_s("%d", &na);
	if (na == 0) {
		nav();
	}
	return 0;
}