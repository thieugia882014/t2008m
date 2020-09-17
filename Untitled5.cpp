#include <stdio.h>
int main(){
   int n,s=0,p=1;
   printf("nhap n=");
	scanf("%d",&n);
       for(int i=0;i<=n;i++){
       	   p=p*i;
	       s+=i+1/p;
	}
	printf("ket qua: %d",s);
}
