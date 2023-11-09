#include <stdio.h>
int main(){
	//4. Kiem tra chia het cho 3 va 5
	//-B1: Nhap vao so nguyen
	int number;
	printf("Nhap vao mot so nguyen:");
	scanf("%d",&number);
	//-B2: kiem tra chia het cho 3 va 5
	if(number%3==0 && number%5==0){
		printf("%d chia het cho 3 va 5\n",number);
	}else{
		printf("%d khong chia het cho 3 va 5\n",number);
	}
	//Su dung 2 cau lenh if
	if(number%3==0){
		if(number%5==0){
			printf("%d chia het cho 3 va 5",number);
		}else{
			printf("%d chia het cho 3 nhung khong chia het cho 5",number);
		}
	}else{
		if(number%5==0){
			printf("%d chia het cho 5 nhung khong chia het cho 3",number);
		}else{
			printf("%d khong chia het cho ca 3 va 5",number);
		}
	}
	
	
}
