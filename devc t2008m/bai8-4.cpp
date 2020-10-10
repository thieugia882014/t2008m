#include<stdio.h>
#include<math.h>
float DienTichTamGiac(int a, int b, int c){
	float S;
	float	P=(a+b+c)/2;
	S=sqrt(P*(P-a)*(P-b)*(P-c));
	return S;
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
	printf("Dien tich cua tam giac la : %f", DienTichTamGiac(a,b,c));
}
