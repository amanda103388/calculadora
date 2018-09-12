#include<stdio.h>

double soma(double x, double y){
	return x+y;
}

double sub(double x, double y){
	return x-y;
}

double mult(double x, double y){
	return x*y;
}

double div(double x, double y){
	return x/y;
}

int main(){
	int x, y, n;
	printf("digite um numero para x e y: ");
	scanf("%d, %d", &x, &y);
	printf("Digite uma operacao: \n
		1-soma\n
		2-subtracao\n
		3-multiplicacao\n
		4-divisao\n");
	scanf("%i", &n);

	switch(n)
	return 0;
}
