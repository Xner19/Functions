#include <stdio.h>
int main(){
	char a='s';
	int b=1;
	if (sizeof(void*)==8){
		printf("the compuer it 64 bit \n");

	}
	else{
		printf("the computer is 32 bit\n");
	}
	printf("%p\n",&b);
	int *ptr=&b;
	printf("%d\n",*ptr);
	if (*ptr==b){
		printf("the machine follows an LSB");
	}
	else{
		printf("the machine follows an MSB");
	}
	return 0;


}
