/*
	Nhap vao tu ban phim 2 so nguyen va 1 phep tinh
	(+,-,*,/,%)
	Su dung switch case in ra ket qua cua phep tinh
*/
#include <stdio.h>
int main(){
	//B1: Nhap 2 so va phep tinh
	int firstNumber, secondNumber;
	char caculation;
	printf("Nhap vao 2 so nguyen:");
	scanf("%d %d",&firstNumber,&secondNumber);
	fflush(stdin);
	printf("Nhap vao phep tinh:");
	caculation = getchar();
	//B2: Su dung switch (pheptinh) - 4 case - 1 default
	switch(caculation){
		case '+':
			printf("Tong 2 so %d va %d la %d\n",firstNumber,secondNumber,firstNumber+secondNumber);
			break;
		case '-':
			printf("Hieu 2 so %d va %d la %d\n",firstNumber,secondNumber,firstNumber-secondNumber);
			break;
		case '*':
			printf("Tich 2 so %d va %d la %d\n",firstNumber,secondNumber,firstNumber*secondNumber);
			break;
		case '/':
			printf("Thuong 2 so %d va %d la %d\n",firstNumber,secondNumber,firstNumber/secondNumber);
			break;
		default:
			printf("So du trong phep chia %d va %d la %d\n",firstNumber,secondNumber,firstNumber%secondNumber);
			
	}
}
