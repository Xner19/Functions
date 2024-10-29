#include <stdio.h>
int main (){

	int a=10;
	int *p;
	p=&a;
	clrscr();
	printf("\nAddress of a: %u", &a);
	printf("\nAddress of a: %u", p);
	printf("\nAddress of p: %u", &p);
	printf("\nValue of p: %d", p);
	printf("\nValue of a: %d", a);
	printf("\nValue of a: %d", *(&a));
	printf("\nValue of a: %d", *p);
	getch();

}
