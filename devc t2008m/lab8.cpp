#include<stdio.h>
#include<math.h>
bool songuyento(int n){
	if(n<2){
		return false;
	}
	for(int i = 2; i <= sqrt(n); i++){
    if(n % i == 0){
        return false;
        }
    }
    	return true;
}
int main(){
	int n;
	printf("Nhap vao so n :");
	scanf("%d", &n);
	if (songuyento(n)) {
           printf("\n la so nguyen to");
       } else {
           printf("\n khong phai la so nguyen to ");
       }
}
