  
#include<stdio.h>
int main(){
	int n;
	do{
	printf("nhap vao mot so : ");
	scanf("%d", &n);
	if(n<=0){
		printf(" vui long nhap lai !\n ");
	}
	}while(n<=0);
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			printf("%d ", i);
		}
	}
}
