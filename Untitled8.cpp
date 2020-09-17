#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    int ngt=1;
    printf("nhap n=");
	scanf("%d",&n);
	for(i=2;i<=sqrt(n);i++)
	ngt=1;
	n%i==0;
	ngt=0;
	 printf("%d la so nguyen to",n);
	
}
