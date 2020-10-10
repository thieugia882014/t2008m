#include<stdio.h>
#include<math.h>
int ChuViTamGiac(float a, float b, float c){
	float Cv;
	if(a + b > c || a + c > b || a + c > b){
		Cv=a+b+c;
	}
	return Cv;
}
int main(){
	int a,b,c;
	do{
	printf("Nhap vao canh a :");
	scanf("%d", &a);
	printf("Nhap vao canh b :");
	scanf("%d", &b);
	printf("Nhap vao canh c :");
	scanf("%d", &c);
	if( a<=0 || b<=0 || c<=0 || a+b<c || a+c<b || a+c<b ){
		printf("Nhap lai!\n");
		}
	}while( a<=0 || b<=0 || c<=0 || a+b<c || a+c<b || a+c<b );
	printf("Chu vi cua tam giac la : %d", ChuViTamGiac(a,b,c));
}
