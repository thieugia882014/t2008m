#include <stdio.h>
int main(){
	int n,gt=1;
	do{
		printf("Nhap so duong n=");
		scanf("%d",&n);
	}while(n<=0);

	for(int i=1;i<=n;i++){
		gt*=i;
	}

	printf("giai thua: %d",gt);
}
