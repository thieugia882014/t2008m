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
	bool c = false;
	for(int i = n - 1; i > -1 ; i--){
		if(arr[i] % 2 != 0){
			printf("phan tu so le lon nhat la : %d", arr[i]);
			c = true;
			break; 
		}
	}
	if(!c){
		printf("Khong co so le nao !");
	}	
}
