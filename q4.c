#include<stdio.h>

struct number{
	int a;
	int b;
}number;

struct number add(struct number n1, struct number n2){
	struct number temp;
	
	temp.a = n1.a + n2.a;
	temp.b = n1.b + n2.b;
	
	return temp;
}

struct number subtract(struct number n1, struct number n2){
	struct number temp;
	
	temp.a = n1.a - n2.a;
	temp.b = n1.b - n2.b;
	
	return temp;
}

struct number multiply(struct number n1, struct number n2){
	struct number temp;
	
	temp.a = (n1.a*n2.a - n1.b*n2.b);
	temp.b = (n1.a*n2.b + n1.b*n2.a);
	
	return temp;
}

int main(){
	struct number n1, n2, sum, sub, mul;
	
	printf("\nFirst complex number \n");
	printf("--------------------\n");
	printf("Enter real part and imaginary part = ");
	scanf("%d %d", &n1.a, &n1.b);
	printf("\nSecond complex number \n");
	printf("--------------------\n");
	printf("Enter real part and imaginary part = ");
	scanf("%d %d", &n2.a, &n2.b);
	
	sum = add(n1, n2);
	printf("\nThe sum of these complex numbers = (%d)+(%d)i\n", sum.a, sum.b);
	
	sub = subtract(n1, n2);
	printf("\nThe subtract of these complex numbers = (%d)+(%d)i\n", sub.a, sub.b);
	
	mul = multiply(n1, n2);
	printf("\nThe multiply of these coplex numbers = (%d)+(%d)i\n", mul.a, mul.b);
	
	return 0;
}
