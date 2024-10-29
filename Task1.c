#include <stdio.h>
int main(){
	int a[4];
	float b[4];
	char c[4];
	short d[4];
	double e[4];
	// int first
	for (int i=0;i<=3;i++){
		printf("the address memory of integers are: %p\n",&a[i]);
	}
	for (int i=0;i<=3;i++){
		printf("the address memory of floats are: %p\n",&b[i]);
	}
	for (int i=0;i<=3;i++){
		printf("the address memory of char are: %p\n",&c[i]);
	}
	for (int i=0;i<=3;i++){
		printf("the address memory of short are: %p\n",&d[i]);
	}
	for (int i=0;i<=3;i++){
		printf("the address memory of double are: %p\n",&e[i]);
	}
	return 0;


}
