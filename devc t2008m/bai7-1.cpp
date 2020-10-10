#include<stdio.h>
int main(){
	int arr[2][3];
	int arrcv[3][2];
	int temp;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j<3; j++){
			printf("Nhap vao so trong mang :");
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i = 0; i < 2; i++){
		for(int j = 0; j <3;j++){
			arrcv[j][i] = arr[i][j];
		}
	}
	for(int j = 0; j<3;j++){
		printf("\n");
		for(int i = 0; i < 2;i++){
			printf("%d\t",arrcv[j][i]);
		}
	}
}
