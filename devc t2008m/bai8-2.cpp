#include<stdio.h>
#include<math.h>
int TongCacChuSo(int n){
	int s;
	int SoTachRa;
	for(;n!=0;){
		SoTachRa = n % 10;
		s+= SoTachRa;
		n/=10;
	}
	return s;
}

int main(){
	int n;
	printf("Nhap vao so n : ");
	scanf("%d", &n);
	printf("Tong cac chu so cua so %d la : %d", n, TongCacChuSo(n));
}
