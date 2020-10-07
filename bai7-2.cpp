  
#include<stdio.h>
int main(){
	int n,x;
	printf("Nhap vao so n :");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap vao so x :");
	scanf("%d",&x);
	
	for(int i = 0; i < n; i++){
		printf("Nhap vao so thu %d :", i);
		scanf("%d", &arr[i]);
	}
	int count;
	int max ;
	bool c = false;
	for(int i = 0; i < n; i++){
		if(arr[i] < x && max<arr[i]){
			max=arr[i];
			c = true;
		}
		if(!c){
			printf("khong co gia tri nao !");
			break;
		}
	}	printf("%d",max);
}
