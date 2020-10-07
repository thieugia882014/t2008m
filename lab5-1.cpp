#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	if(n<0){
		printf("khong co gia tri");
	}else if(n==0){
		printf("Vi tri 0 la: 0");
	}else if(n==1 || n==2){
		printf("Vi tri %d la: 1",n);
	}else{
		int x1=0,x2=1,x3=1;
		for(int i=3;i<=n;i++){
			x1=x2;
			x2=x3;
			x3=x1+x2;
		}
		printf("Vi tri %d la: %d",n,x3);
	}
}
