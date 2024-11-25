#include <stdio.h>

int main()
{
	// khai bao bien 
	int firstNumber;
	// nhap gia tri cho bien firstNumber tu ban phim
	printf("Moi ban nhap mot so nguyen bat ki:");
	scanf("%d",&firstNumber);
	// xu ly yeu cau bai toan 
	if(firstNumber == 0){
		printf("So 0 khong phai la so duong hay so am "); 
	}
	else{
		if(firstNumber > 0){
			printf("So ban vua nhap la so duong");
		}
		else{
			printf("So ban vua nhap là so am"); 
		} 
		}
	    return 0; 
 }
   
 

