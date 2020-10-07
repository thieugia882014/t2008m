#include <stdio.h>
#include <string.h>
void SapXepMangChuoi(char ars[][100],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(ars[j],ars[j+1]) > 0){
				char tmp[100];
				strcpy(tmp,ars[j]);
				strcpy(ars[j],ars[j+1]);
				strcpy(ars[j+1],tmp);
			}
		}
	}
	return ;
}

int main(){
	char ars[5][100];
	for(int i=0;i<5;i++){
		printf("nhap chuoi thu %d: ",i);
		scanf("%s",ars[i]);
	}
	SapXepMangChuoi(ars,5);
	printf("Sau khi sap xep xong:\n");
	for(int i=0;i<5;i++){
		printf("%s \n",ars[i]);
	}
}
