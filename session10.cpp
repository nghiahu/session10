#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n ,m,key;
	int sum;
	printf("Nhap so dong: ");
	scanf("%d",&n);
	printf("Nhap so cot: ");
	scanf("%d",&m);
	int numbers[n][m];
	do{
		printf("****************MENU**************\n");
		printf("1. Nhap gia tri cac phan tu cuu mang\n");
		printf("2. In gia tri cac phan tu trong mang theo ma tran\n");
		printf("3. Tinh so luong cac phan tu chia het cho 2 va 3 trong mang\n");
		printf("4. In cac phan tu va tong cac phan tu nam tren duong bien, duong cheo chinh va duong cheo phu\n");
		printf("5. Su dung thuat toan sap xep lua chon sap xep cac phan tu tang dan theo cot cua mang\n");
		printf("6. In ra cac phan tu la so nguyen to trong mang\n");
		printf("7. Su dung thuat toan noi bot sap xep cac phan tu tren duong cheo chinh cua mang giam dan\n");
		printf("8. Nhap gia tri mot mang 1 chieu gom m phan tu va chi so dong muon chen vao mang, thuc hien chen vao mang 2 chieu\n");
		printf("9. Thoat\n");
		printf("Lua chon cua ban: ");
		
		int choice;
		scanf("%d",&choice);
		switch (choice){
			case 1:
				printf("Gia tri cac phan tu trong mang:\n");
				for(int i = 0; i < n; i++){
					for(int j = 0;j < m; j++){
						printf("numbers[%d][%d]=",i,j); 
						scanf("%d",&numbers[i][j]);
					}
				}
				break;
			case 2:
				printf("Cac phan tu trong mang theo ma tran\n");
				for(int i = 0; i < n; i++){
					for(int j = 0;j < m; j++){
						printf("%d\t",numbers[i][j]);
					}
					printf("\n");
				}
				break;
			case 3:
				key = 0;
				for(int i = 0; i < n; i++){
					for(int j = 0;j < m; j++){
						if(numbers[i][j]%2==0 || numbers[i][j]%3==0){
							key ++;
						}
					}
				}
				printf("So luong cac phan tu chia het cho 2 va 3 trong mang la: %d",key);
				printf("\n");
				break;
			case 4:
				sum = 0;
				printf("Cac pham tu nam tren duong bien: ");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i==0 || i==n-1 || j ==0 || j == m-1){
							printf ("%d\t",numbers[i][j]);
							sum += numbers[i][j];
						}
					}
				}
				printf("\nCac phan tu cua duong cheo chinh: ");
					if(n==m){
						for(int i=0;i<n;i++){
							for(int j=0;j<m;j++){
								if(i==j){
									printf("%d\t",numbers[i][j]);
									sum+=numbers[i][j];
								}
							}
						}
					printf("\nCac phan tu cua duong cheo phu: "); 
					for(int i = 0; i<n ; i++){
						for(int j=0;j<m;j++){
							if(i+j==n-1){
								printf("%d\t",numbers[i][j]);
								sum+=numbers[i][j];
							}
						}
					}
					}else{
						printf("\nDay khong phai ma tran vuong, khong co duong cheo chinh va duong cheo phu ");
						}
				printf("\nTong cac phan tu: %d",sum);
				printf("\n");
				break;
			case 5:
				break;
			case 6:
				printf("Cac phan tu la so nguyen to trong mang: ");
				for(int i = 0; i<n ; i++){
					for(int j=0;j<m;j++){
						int isPrime = 0;
						if(numbers[i] >= 2){
							for(int j=2; j <= sqrt(numbers[i]); j++){
								if(numbers[i] % j == 0){
									break;
								}
							}
						}else{
							isPrime=1;
					}
					if (isPrime == 0){
						printf("%d",numbers[i][j]);
					}
				}
					}
				}
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				exit(0);
				default:
				printf("Vui long chon tu 1 - 9");		
				}
	}while(1 == 1);
}
