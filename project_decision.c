#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//1. Nhap vao 1 so, kiem tra so do la so chan hay so le
	//-B1: nhap vao mot so nguyen
	int number;
	printf("Nhap vao mot so nguyen:");
	scanf("%d",&number);
	//-B2: Kiem tra so chan - if
	if(number%2==0){
		printf("%d la so chan\n",number);
	}else{
		printf("%d la so le\n",number);
	}
	//2. In ra so du trong phep chia 3 - if
	if(number%3==0){
		printf("%d chia het cho 3\n",number);
	}else if(number%3==1){
		printf("%d chia 3 du 1\n",number);
	}else{
		printf("%d chia 3 du 2\n",number);
	}
	//3. In ra so du trong phep chia 5
	
	//4. Nhap vao 1 so nguyen, kiem tra so nguyen do co
	//chia het cho 3 va 5 khong - 1 cau dieu kien
	
	//5. Giong yeu cau 4 va su dung 2 cau dieu kien
	
}
