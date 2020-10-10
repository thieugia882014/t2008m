#include<stdio.h>
#include<math.h>
int main(){
	int n, count;
	do{
	printf("Nhap vao mot so n : ");
	scanf("%d", &n);
	if(n<=2){
		printf("vui long nhap lai !");
		}
	}while(n<=2);
	
		
	for(int i = 2; i < n;i++){
		count=0;
		for(int j = 2; j <=i; j++){
			if(i%j==0){
				count++;
			}
		}
		if(count == 1){
			printf("cac so nguyen to nho hon la : %d\n",i);
		}
	}
}
