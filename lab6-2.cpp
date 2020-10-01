
#include<stdio.h>
int main(){
	int n;
	printf("nhap vao so n :");
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i< n; i++){
		printf("nhap vao gia tri thu %d :" , i);
		scanf("%d", &arr[i]);
	}
	int tong = 0;
	int count = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] % 2 !=0 && i % 2 == 0){
			tong=tong+arr[i];
			count++;
		}
	}
	if(count > 0)
	printf("tbc = %f", (float)tong/count );
	else
	printf("khong co so le nao!");	
}
