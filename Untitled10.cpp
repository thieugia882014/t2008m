#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	do{
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	printf("nhap c=");
	scanf("%d",&c);
	}while(a+b>c && a+c>b && b+c>a);
	for(int i=1;;i++)
		int p = a+b+c;
		printf("%d %d %d la 3 canh tam giac\n",a,b,c);
		printf("Chu vi: %d\n",p);
		float pi = 3.14158;
		int x = (int)pi;
		float p2 = (float)p;
		p2 = p2/2;
		float s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
		printf("Dien tich: %f\n",s);
} 
