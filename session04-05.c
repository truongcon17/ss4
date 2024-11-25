#include <stdio.h>

int main()
{
	// khai bao bien 
	int firstNumber,secondNumber,tuesNumber; 
	// nhap gia tri cho bien firstNumber tu ban phim
	printf("Moi ban nhap so thu nhat:");
	scanf("%d",&firstNumber);
	printf("Moi ban nhap so thu hai:");
	scanf("%d",&secondNumber);
	printf("Moi ban nhap so thu ba:");
	scanf("%d",&tuesNumber);
	// xu ly yeu cau bai toan 
	if(tuesNumber <= firstNumber && tuesNumber >= secondNumber || tuesNumber >= firstNumber && tuesNumber <= secondNumber){
	 
		printf("So thu ba ban nhap nam trong khoang so thu nhat va so thu hai"); 
	}
	else{
	    printf("So thu ba ban nhap khong nam trong khoang so thu nhat va so thu hai");	
	}
		
	    return 0; 
 }
 
