#include <stdio.h>
int main(){
	//Nhap vao 1 so nguyen 0-9, phiem am so nguyen
	//-B1: Nhap vao so nguyen
	int number;
	printf("Nhap vao mot so nguyen:");
	scanf("%d",&number);
	//-B2: Su dung switch-case phien am
	switch(number){
		case 0:
			printf("Khong\n");
			break;
		case 1:
			printf("Mot\n");
			break;
		case 2:
			printf("Hai\n");
			break;
		case 3:
			printf("Ba\n");
			break;
		case 4:
			printf("Bon\n");
			break;
		case 5:
			printf("Nam\n");
			break;
		case 6:
			printf("Sau\n");
			break;
		case 7:
			printf("Bay\n");
			break;
		case 8:
			printf("Tam\n");
			break;
		default:
			printf("Chin\n");			
	}
}
