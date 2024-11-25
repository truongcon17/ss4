#include <stdio.h>

int main()
{
	// khai bao bien 
	int firstNumber;
	// nhap gia tri cho bien firstNumber tu ban phim
	printf("Moi ban nhap mot so nguyen bat ki:");
	scanf("%d",&firstNumber);
	// xu ly yeu cau bai toan 
	if(firstNumber % 2 == 0){
		printf("So ban nhap là so chan"); 
	}
	else{
		printf("So ban nhap la so le");
	}
	    return 0; 
 }
   
 

