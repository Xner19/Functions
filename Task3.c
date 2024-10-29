#include <stdio.h>
int sum(int,int);
float floatsum(float,float);
float areacirc(float);
float arearect(float,float);
float frac(float,float);
int fact(int);
int main() {
	int a,b;
	printf("please enter the values of a and b \n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("the sum is%d\n",sum(a,b));	

	printf("the sum is %f\n",floatsum(a,b));

	printf("the area of circle a is: %f\n",areacirc(a));

	printf("the are of rect is:%f\n",arearect(a,b));

	printf("the division of two number is %f \n",frac(a,b));
	printf("the factroical of a is %d \n",fact(a));
	return 0;
	
}
int sum(int a,int b){
	return a+b;
	}
float floatsum(float a ,float b){
	return a+b;
}
float areacirc(float a){
	return 3.14*a*a;
}
float arearect(float a,float b){
	return a*b;
}
float frac(float a,float b){
	return a/b;
}
int fact(int a){
	 if(a==0)
		return 1;
	 else 
		return a*fact(a-1); 
}
