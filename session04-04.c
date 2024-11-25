#include <stdio.h>

int main()
{
	// khai bao bien 
	int firstNumber;
	// nhap gia tri cho bien firstNumber tu ban phim
	printf("Moi ban nhap mot thang bat ki:");
	scanf("%d",&firstNumber);
	// xu ly yeu cau bai toan 
	if(firstNumber == 1 || firstNumber == 3 || firstNumber == 5 || firstNumber == 7 || firstNumber == 8 || firstNumber == 10 || firstNumber == 12){
		printf("Thang %d ban vua nhap co 31 ngay", firstNumber); 
	}
	else{
		if(firstNumber == 4 || firstNumber == 6 || firstNumber == 9 || firstNumber == 11){
			printf("Thang %d ban vua nhap co 30 ngay", firstNumber); 
		}
		else{
			if(firstNumber == 2){
				printf("Thang 2 chi co 28 ngay"); 
			}
			else{
				printf("Thang ban vua nhap khong hop le"); 
			} 
		} 
		
	}
	    return 0; 
 }
 
