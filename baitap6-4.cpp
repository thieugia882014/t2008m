  
#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu : ");
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i< n; i++){
		printf("nhap vao gia tri thu %d :" , i);
		scanf("%d", &arr[i]);
	}
	int soduong = 0;
	int max = 0;
	for(int i = 0; i < n; i++){
		    soduong+=arr[i];
		    if((arr[i] < 0 || i == n -1 )){
		        if( soduong > max){
		             max = soduong;
		        }
		       soduong = 0;
		}
	}printf("tong chuoi lon nhat la : %d", max);
}
