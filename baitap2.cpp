#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("\nnhap mot so tu ban phim: ");
	scanf("%d",&n);
	
	if(n>=2){
		if(n<=7){
			   printf("ngay thu: %d",n);
	}
	else{
		if(n==8){
			printf("ngay chu nhat");
		}
		else{
			printf("khong phai la ngay trong tuan");
			
		}
	}
}
}
