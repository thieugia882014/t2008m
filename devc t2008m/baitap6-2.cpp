#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu : ");
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i< n; i++){
		printf("nhap vao gia tri thu %d :" , i);
		scanf("%d", &arr[i]);
	}
	for(int i = 0;i < arr[n]; i++){
		if(arr[i] <= 0){
			printf("khong co phan tu nao !");
			break;
		}
		else if(arr[i] >=1){
			printf("phan tu duong nho nhat la : %d", arr[i]);
			break;
		}
	}
}
