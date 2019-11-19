#include<stdio.h>
#include<stdlib.h>

int addbyone(int &xref);
//c不支援 main.c 要改成main.cpp

int  main() {
	int x = 100;
	int y = addbyone(x);
	printf("x=%d\n", x);
	system("pause");
}

int addbyone(int &xref) {
	xref++;
	printf("xref=%d\n", xref);
	return xref;

}