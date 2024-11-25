#include <stdio.h>

int main()
{
	// khai bao bien 
	int firstNumber;
	// nhap gia tri cho bien firstNumber tu ban phim
	printf("Moi ban nhap mot so nguyen bat ki:");
	scanf("%d",&firstNumber);
	// xu ly yeu cau bai toan 
	if(firstNumber % 5 == 0 && firstNumber % 3 == 0){
		printf("So ban nhap vua chia het cho 3 vua chia het cho 5"); 
	}
	else{
		if(firstNumber % 5 == 0){
			printf("So ban vua nhap chi chia het cho 5"); 
		}
		else{
			if(firstNumber % 3 == 0){
				printf("So ban vua nhap chi chia het cho 3"); 
			}
			else{
				printf("So ban vua nhap khong chia het co ca 3 va 5"); 
			} 
		} 
		
	}
	    return 0; 
 }
   
 

