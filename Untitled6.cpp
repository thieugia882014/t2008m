#include <stdio.h>
int main(){
   int n,s=0;
   printf("nhap n=");
	scanf("%d",&n);
       for(int i=0;i<=n;i++){
	       s+=i;
	}
	printf("ket qua: %d",s);
}
