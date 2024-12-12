#include <stdio.h>
int main() {
	int option;
	float amount;
	float result;
	
	printf("==============CHUONG TRINH CHUYEN DOI TIEN TE==============.\n");
	printf("1.USD to VND.\n");
	printf("2.EUR to VND.\n");
	printf("3.GPB to VND.\n");
	printf("4.JPY to VND.\n");
	printf("5.VND to USD.\n");
	printf("6.VND to EUR.\n");
	printf("7.VND to GPB.\n");
	printf("8.VND to JPY.\n");
	
	printf("Nhap lua chon ban muon chuyen doi 1-8: \n");
	scanf("%d", &option);
	
	printf("Nhap so luong ban muon chuyen doi: \n");
	scanf("%f", &amount);
	
	switch (option) {
		case 1: 
		  result = amount * 23500;
		  printf("Ket qua la: %f\n", result);
		  break;
		
		case 2: 
		  result = amount * 25000;
		  printf("Ket qua la: %f\n", result);
		  break;
		  
		case 3: 
		  result = amount * 28000;
		  printf("Ket qua la: %f\n", result);
		  break;
		  
		case 4: 
		  result = amount * 180;
		  printf("Ket qua la: %f\n", result);
		  break;
		  
		case 5: 
		  result = amount / 23500;
		  printf("Ket qua la: %f\n", result);
		  break;
		
		case 6: 
		  result = amount / 25000;
		  printf("Ket qua la: %f\n", result);
		  break;
		  
		 case 7: 
		  result = amount / 28000;
		  printf("Ket qua la: %f\n", result);
		  break;
		  
		case 8: 
		  result = amount / 180;
		  printf("Ket qua la: %f\n", result);
		  break;
	} 
	return 0;
}
