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
	int x;
	printf("nhap so can tim : ");
	scanf("%d", &x);
	bool c = false;
	for(int i = 0; i < n ; i++){
		if(x==arr[i]){
			printf("%d nam trong mang", x);
			c = true;
			break;
		}
	}
	if(!c){
		printf("so khong co trong mang !");
	}
}
