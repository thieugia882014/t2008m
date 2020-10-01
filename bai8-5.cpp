#include<stdio.h>
int UCLN(int a, int b){
    while (a*b != 0){
        if (a > b){
            a %= b;
        }else{
            b %= a;
        }
    }
    return a + b; 
}
int main(){
	int a;
	int b;
	printf("Nhap vao so a : ");
	scanf("%d", &a);
	printf("Nhap vao so b : ");
	scanf("%d", &b);
	printf("Uoc chung lon nhat cua hai so la : %d", UCLN(a,b));
}
