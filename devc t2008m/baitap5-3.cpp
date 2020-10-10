#include<stdio.h>

int main() {
   int a, b, i, UCLN;
	printf("Nhap vao so a : ");
	scanf("%d", &a);
	printf("Nhap vao so b : ");
	scanf("%d", &b);

   for(i = 1; i <= a || i <= b; i++) {
   if( a%i == 0 && b%i == 0 )
      UCLN = i;
   }

   printf("UCLN = %d", UCLN);
   
   return 0;
}
